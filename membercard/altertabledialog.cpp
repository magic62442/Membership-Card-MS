#include "altertabledialog.h"
#include "ui_altertabledialog.h"
#include "activity.h"
#include <QSqlQuery>
#include <QButtonGroup>
#include <QMessageBox>
#include <QDebug>

AlterTableDialog::AlterTableDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlterTableDialog)
{
    ui->setupUi(this);
    //设置所有textLabel显示的内容
    QFont font;
    font.setPointSize(16);
    ui -> nameLabel -> setAlignment(Qt::AlignLeft);
    ui -> nameLabel -> setFont(font);
    ui -> nameLabel -> setText("会员姓名");
    ui -> alterLabel -> setAlignment(Qt::AlignLeft);
    ui -> alterLabel -> setFont(font);
    ui -> alterLabel -> setText("操作");
    ui -> pswdLabel -> setAlignment(Qt::AlignLeft);
    ui -> pswdLabel -> setFont(font);
    ui -> pswdLabel -> setText("密码");
    ui -> npswdLabel -> setAlignment(Qt::AlignLeft);
    ui -> npswdLabel -> setFont(font);
    ui -> npswdLabel -> setText("修改密码");
    ui -> checkBox_1 -> setText("充值");
    ui -> checkBox_2 -> setText("挂失");
    ui -> checkBox_3 -> setText("冻结");
    ui -> checkBox_4 -> setText("退卡");
    ui -> checkBox_1 -> setText("充值");
    ui -> checkBox_2 -> setText("挂失");
    ui -> checkBox_3 -> setText("冻结");
    ui -> checkBox_4 -> setText("退卡");
    ui -> checkBox_5 -> setText("恢复");

    //设置内容显示方式为密码
    ui -> pswdLine -> setEchoMode(QLineEdit::PasswordEchoOnEdit);
    ui -> npswdLine -> setEchoMode(QLineEdit::PasswordEchoOnEdit);
    //设置几个选项之间互斥
    QButtonGroup * buttonGroup1 = new QButtonGroup(this);
    buttonGroup1 -> setExclusive(true);
    buttonGroup1 -> addButton(ui -> checkBox_1);
    buttonGroup1 -> addButton(ui -> checkBox_2);
    buttonGroup1 -> addButton(ui -> checkBox_3);
    buttonGroup1 -> addButton(ui -> checkBox_4);
    buttonGroup1 -> addButton(ui -> checkBox_5);
    ui -> pushButton -> setText("确定");
    //读取lineEdit中的内容
    connect(ui -> pushButton, &QPushButton::clicked,
    [=]() {
        QSqlQuery query;
        //获得用户输入的结果
        QString nameStr = QString("'") + ui -> nameLine -> text() + "'";
        QString pswdStr = QString("'") + ui -> pswdLine -> text() + "'";
        //eg: SELECT pswd FROM info where name = '李祺彦';
        QString check = QString("SELECT pswd FROM info WHERE name = %1;").arg(nameStr);
        QString getBalance = QString("SELECT balance FROM card WHERE name = %1;").arg(nameStr);
        QString getState = QString("SELECT state FROM card WHERE name = %1;").arg(nameStr);
        //  qDebug() << nameStr << endl;
        //  qDebug() << pswdStr << endl;
        //  qDebug() << check << endl;
        //  qDebug() << getBalance << endl;
        //从数据库中获取当前用户的余额
        query.exec(getBalance);
        double balance;
        if(query.first())
            balance = query.value(0).toDouble();
        //  qDebug() << query.value(0);
        //  qDebug() << balance;
        //从数据库中获取当前用户卡的状态
        query.exec(getState);
        QString state;
        if(query.first())
            state = query.value(0).toString();
        //  qDebug() << state;
        double amount = ui -> amountLine -> text().toDouble() + balance;

        query.exec(check);
        if(query.first())
            //  qDebug() << query.value(0).toString();
        if("'" + query.value(0).toString() + "'" == pswdStr) {
            if(buttonGroup1 -> checkedButton() == ui -> checkBox_1) {
                if(state != "正常") {
                    QMessageBox::warning(this, "会员卡状态异常", "会员卡已被挂失或冻结，请先恢复正常状态！");
                }
                else {
                    //eg: UPDATE `membercard`.`card` SET `balance` = '777' WHERE (`ID` = '888800010');
                    QString cardQuery = QString("UPDATE `membercard`.`card` SET `balance` =  %1 ").arg(amount) +
                                        QString("WHERE (`name` = ") + nameStr + QString(");");
                    //  qDebug() << cardQuery << endl;
                    query.exec(cardQuery);
                    QMessageBox::information(this, "操作成功", "充值成功");
                }
            }
            else if(buttonGroup1 -> checkedButton() == ui -> checkBox_4) {
                //DELETE FROM `membercard`.`card` WHERE (`ID` = '888800014');
                QString cardQuery = QString("DELETE FROM `membercard`.`card` "
                                            "WHERE (`name` = %1);").arg(nameStr);
                query.exec(cardQuery);
                //  qDebug() << cardQuery;
                QString infoQuery = QString("DELETE FROM `membercard`.`info` "
                                            "WHERE (`name` = %1);").arg(nameStr);
                query.exec(infoQuery);
                //  qDebug() << infoQuery;
                QMessageBox::information(this, "操作成功", "退卡成功");
            }
            else {
                //获得用户选择的结果
                QString stateStr = QString("'") + (buttonGroup1 -> checkedButton() ==
                        ui -> checkBox_2 ? "挂失" : ui -> checkBox_5 ? "正常" : "冻结") + "'";
                // eg: UPDATE `membercard`.`card` SET `state` = '冻结' WHERE (`ID` = '888800011');
                QString cardQuery = QString("UPDATE `membercard`.`card` SET `state` =  %1 ").arg(stateStr) +
                                    QString("WHERE (`name` = ") + nameStr + QString(");");
                //  qDebug() << cardQuery << endl;
                query.exec(cardQuery);
                QMessageBox::information(this, "操作成功", "操作成功");
            }
            //  qDebug() << ui -> npswdLine -> text();
            if(ui -> npswdLine -> text().size() != 0) {
                // eg: UPDATE `membercard`.`info` SET `pswd` = 'liqiyan' WHERE (`ID` = '888800001');
                QString infoQuery = QString("UPDATE `membercard`.`info` SET `pswd` =  '%1' ").arg(ui -> npswdLine -> text()) +
                                    QString("WHERE (`name` = ") + nameStr + QString(");");
                //  qDebug() << infoQuery << endl;
                query.exec(infoQuery);
            }
        }
        else {
            QMessageBox::warning(this, "密码错误", "密码错误，请重新输入密码！");
        }
        this ->close();
    });
}

AlterTableDialog::~AlterTableDialog()
{
    delete ui;
}
