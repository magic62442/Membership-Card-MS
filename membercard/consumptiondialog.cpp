#include "consumptiondialog.h"
#include "ui_consumptiondialog.h"
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>

QString nameStr = QString("");
double price = 0.0;
double consumption = 0.0;
double saved = 0.0;
QString type = QString("");
int threshold = 0;
int cut = 0;
double rate = 0.0;


ConsumptionDialog::ConsumptionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConsumptionDialog)
{
    //初始化所有label中的内容
    ui->setupUi(this);
    QFont font;
    font.setPointSize(16);
    ui -> label_1 -> setAlignment(Qt::AlignLeft);
    ui -> label_1 -> setFont(font);
    ui -> label_1 -> setText("会员姓名");
    ui -> label_2 -> setAlignment(Qt::AlignLeft);
    ui -> label_2 -> setFont(font);
    ui -> label_2 -> setText("该会员为    ，可享受的优惠有");
    ui -> label_3 -> setAlignment(Qt::AlignLeft);
    ui -> label_3 -> setFont(font);
    ui -> label_3 -> setText("①满   减   ");
    ui -> label_4 -> setAlignment(Qt::AlignLeft);
    ui -> label_4 -> setFont(font);
    ui -> label_4 -> setText("②满减后打  折");
    ui -> label_5 -> setAlignment(Qt::AlignLeft);
    ui -> label_5 -> setFont(font);
    ui -> label_5 -> setText("商品原价为");
    ui -> label_6 -> setAlignment(Qt::AlignLeft);
    ui -> label_6 -> setFont(font);
    ui -> label_6 -> setText("减免的金额为    , 应付的金额为    ");
    ui -> pushButton -> setText("确定");
    ui -> label_7 -> setAlignment(Qt::AlignLeft);
    ui -> label_7 -> setFont(font);
    ui -> label_7 -> setText("备注");
    connect(ui -> lineEdit, &QLineEdit::editingFinished,
    [=] {
        nameStr = ui -> lineEdit -> text();
        QString getType = QString("SELECT type FROM card WHERE name = '%1';").arg(nameStr);
        qDebug() << getType;
        QSqlQuery query;
        query.exec(getType);
        if(query.first())
            type = query.value(0).toString();
        qDebug() << type;
        QString getState = QString("SELECT state FROM card WHERE name = '%1';").arg(nameStr);
        QString state;
        query.exec(getState);
        if(query.first())
            state = query.value(0).toString();
        qDebug() << state;
        if(state != "正常") {
            QMessageBox::warning(this, "会员卡状态异常", "会员卡已被挂失或冻结，请先恢复正常状态！");
        }
        else {
            if(type == "钻石会员") {
                rate = actInfo -> rate1;
                threshold = actInfo -> threshold1;
                cut = actInfo -> cut1;
            }
            else if(type == "金卡会员") {
                rate = actInfo -> rate2;
                threshold = actInfo -> threshold2;
                cut = actInfo -> cut2;
            }
            else {
                rate = actInfo -> rate3;
                threshold = actInfo -> threshold3;
                cut = actInfo -> cut3;
            }
           ui -> label_2 -> setText(QString("该会员为%1，可享受的优惠有").arg(type));
           ui -> label_3 -> setText(QString("①满%1减%2").arg(threshold).arg(cut));
           ui -> label_4 -> setText(QString("②满减后打%1折").arg(rate));

        }

    });

    connect(ui -> lineEdit_2, &QLineEdit::editingFinished,
    [=] {
        price = ui -> lineEdit_2 -> text().toDouble();
        consumption = price > threshold ? (price - cut) * rate / 10 : price * rate / 10;
        saved = price - consumption;
        ui -> label_6 -> setText(QString("减免的金额为%1, 应付的金额为%2").arg(saved).arg(consumption));
    });

    connect(ui -> pushButton, &QPushButton::clicked,
    [=]() {
        QSqlQuery query;
        QString getBalance = QString("SELECT balance FROM card WHERE name = %1;").arg(nameStr);
        //从数据库中获取当前用户的余额
        query.exec(getBalance);
        double balance;
        if(query.first())
            balance = query.value(0).toDouble();
        if(balance <= consumption) {
            // "UPDATE `membercard`.`card` SET `balance` = '5157', `consumption` = '3453.5',"
            // "`saved` = '123' WHERE (`ID` = '888800008');"

            QString cardQuery = QString("UPDATE `membercard`.`card` SET `balance` = `balance` - '%1', "
                                        "`consumption` = `consumption` + '%2',"
                                        "`saved` = `saved` + '%3' WHERE (`name` = '%4');")
                    .arg(consumption).arg(consumption).arg(saved).arg(nameStr);
            //qDebug() << cardQuery;
            query.exec(cardQuery);
            QString infoQuery = QString("UPDATE `membercard`.`info` SET `score` = `score` + '%1' "
                                        " WHERE (`name` = '%2');")
                    .arg(consumption*0.1).arg(nameStr);
            qDebug() << infoQuery;
            query.exec(infoQuery);
            QString note = ui -> textEdit ->toPlainText();
            // INSERT INTO `membercard`.`record` (`name`, `amount`, `note`)
            // VALUES ('张竞之', '142.5', '到此一游');

            QString recordQuery = QString("INSERT INTO `membercard`.`record` (`name`, `amount`, `note`) "
                                          "VALUES ('%1', '%2', '%3');")
                      .arg(nameStr).arg(consumption).arg(note);
            qDebug() << recordQuery;
            query.exec(recordQuery);
            //如果会员达到一定积分，则升级为银卡会员或金卡会员
            QString select1 = QString("SELECT score FROM info WHERE name = '%1';").arg(nameStr);
            QString select2 = QString("SELECT type FROM card WHERE name = '%1';").arg(nameStr);
            query.exec(select1);
            double curCons;
            if(query.first())
                curCons = query.value(0).toDouble();
            query.exec(select2);
            QString curType;
            if(query.first())
                curType = query.value(0).toString();
            if(curCons >= 100 && curType == "银卡会员") {
                QString update1 = QString("UPDATE `membercard`.`info` SET `type` = '金卡会员' WHERE (`name` = '%1');").arg(nameStr);
                QString update2 = QString("UPDATE `membercard`.`card` SET `type` = '金卡会员' WHERE (`name` = '%1');").arg(nameStr);
                query.exec(update1);
                query.exec(update2);
            }
            else if(curCons >= 200 && curType != "钻石会员") {
                QString update1 = QString("UPDATE `membercard`.`info` SET `type` = '钻石会员' WHERE (`name` = '%1');").arg(nameStr);
                QString update2 = QString("UPDATE `membercard`.`card` SET `type` = '钻石会员' WHERE (`name` = '%1');").arg(nameStr);
                query.exec(update1);
                query.exec(update2);
            }
            QMessageBox::information(this, "操作成功", "操作成功");
        }
        else {
            QMessageBox::warning(this, "余额不足", "用户余额不足！");
        }
        this -> close();
    });
}

ConsumptionDialog::~ConsumptionDialog()
{
    delete ui;
}
