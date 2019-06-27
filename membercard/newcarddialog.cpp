#include "newcarddialog.h"
#include "ui_newcarddialog.h"
#include <QButtonGroup>
#include <QLineEdit>
#include <QSqlQuery>
#include <QDebug>

NewCardDialog::NewCardDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewCardDialog)
{
    ui->setupUi(this);
    //设置所有textLabel显示的内容
    QFont font;
    font.setPointSize(16);
    ui -> nameLabel -> setAlignment(Qt::AlignLeft);
    ui -> nameLabel -> setFont(font);
    ui -> nameLabel -> setText("会员姓名");
    ui -> sexLabel -> setAlignment(Qt::AlignLeft);
    ui -> sexLabel -> setFont(font);
    ui -> sexLabel -> setText("性别");
    ui -> pswdLabel -> setAlignment(Qt::AlignLeft);
    ui -> pswdLabel -> setFont(font);
    ui -> pswdLabel -> setText("会员卡密码");
    ui -> typeLabel -> setAlignment(Qt::AlignLeft);
    ui -> typeLabel -> setFont(font);
    ui -> typeLabel -> setText("会员卡类型");
    ui -> amountLabel -> setAlignment(Qt::AlignLeft);
    ui -> amountLabel -> setFont(font);
    ui -> amountLabel -> setText("充值金额");
    ui -> phoneLabel -> setAlignment(Qt::AlignLeft);
    ui -> phoneLabel -> setFont(font);
    ui -> phoneLabel -> setText("手机号码");
    ui -> checkBox_1 -> setText("男");
    ui -> checkBox_2 -> setText("女");
    ui -> checkBox_3 -> setText("钻石会员");
    ui -> checkBox_4 -> setText("金卡会员");
    ui -> checkBox_5 -> setText("银卡会员");
    //设置内容显示方式为密码
    ui -> pswdLine -> setEchoMode(QLineEdit::PasswordEchoOnEdit);
    //设置几个选项之间互斥
    QButtonGroup * buttonGroup1 = new QButtonGroup(this);
    buttonGroup1 -> setExclusive(true);
    buttonGroup1 -> addButton(ui -> checkBox_1);
    buttonGroup1 -> addButton(ui -> checkBox_2);
    QButtonGroup * buttonGroup2 = new QButtonGroup(this);
    buttonGroup2 -> setExclusive(true);
    buttonGroup2 -> addButton(ui -> checkBox_3);
    buttonGroup2 -> addButton(ui -> checkBox_4);
    buttonGroup2 -> addButton(ui -> checkBox_5);

    ui -> pushButton -> setText("确定");
    //读取lineEdit中的内容
    connect(ui -> pushButton, &QPushButton::clicked,
    [=]() {
        //获得用户选择的结果
        QString sexStr = QString("'") + (buttonGroup1 -> checkedButton() == ui -> checkBox_1 ?
                                             "男" : "女") + "', ";
        QString typeStr = QString("'") + (buttonGroup2 -> checkedButton() ==
                ui -> checkBox_3 ? "钻石会员" : ui -> checkBox_4 ? "金卡会员" : "银卡会员") + "', ";
        int score = (typeStr == "钻石会员") ? 200 : "金卡会员" ? 100 : 0;
        //获得用户输入的结果
        QString nameStr = QString("'") + ui -> nameLine -> text() + "', ";
        QString pswdStr = QString("'") + ui -> pswdLine -> text() + "'";
        double amount = ui -> amountLine -> text().toDouble();
        long phone = ui -> phoneLine -> text().toLong();
        QString infoQuery = QString("INSERT INTO `membercard`.`info` (`name`, `sex`, `phone`, `type`, `score`, `pswd`) "
                            "VALUES (") + nameStr + sexStr + QString("'%1', ").arg(phone)
                            + typeStr + QString("'%1', ").arg(score) + pswdStr + QString(");");
        qDebug() << infoQuery;
        QString cardQuery = QString("INSERT INTO `membercard`.`card` (`name`, `type`, `balance`) "
                            "VALUES (" + nameStr + typeStr)
                            + QString("'%1'").arg(amount) + ");";
        // qDebug() << infoQuery << cardQuery;
        // example
//              infoQuery = "INSERT INTO `membercard`.`info` (`name`, `sex`, `phone`, `type`, `pswd`) "
//                           "VALUES ('莫光严', '男', '18824569913', '钻石会员', 'moguangyan');";
//              cardQuery = "INSERT INTO `membercard`.`card` (`name`, `type`, `balance`) "
//                           "VALUES ('莫光严', '钻石会员', '500000');";
      //更新所有表
      QSqlQuery query;
      query.exec(infoQuery);
      query.exec(cardQuery);
        this ->close();
    });
}

NewCardDialog::~NewCardDialog()
{
    delete ui;
}
