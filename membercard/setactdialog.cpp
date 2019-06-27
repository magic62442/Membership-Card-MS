#include "setactdialog.h"
#include "ui_setactdialog.h"
#include "activity.h"

SetActDialog::SetActDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetActDialog)
{
    ui->setupUi(this);
    //设置所有label显示的内容和格式
    QFont font;
    font.setPointSize(16);
    ui -> nameLabel -> setAlignment(Qt::AlignCenter);
    ui -> nameLabel -> setFont(font);
    ui -> nameLabel-> setText("活动名称");
    ui -> zuanLabel -> setAlignment(Qt::AlignCenter);
    ui -> zuanLabel -> setFont(font);
    ui -> zuanLabel-> setText("钻石会员");
    ui -> zhekouLabel1 -> setAlignment(Qt::AlignCenter);
    ui -> zhekouLabel1 -> setFont(font);
    ui -> zhekouLabel1-> setText("折扣");
    ui -> zheLabel1 -> setAlignment(Qt::AlignCenter);
    ui -> zheLabel1 -> setFont(font);
    ui -> zheLabel1-> setText("折");
    ui -> manLabel1 -> setAlignment(Qt::AlignCenter);
    ui -> manLabel1 -> setFont(font);
    ui -> manLabel1-> setText("满");
    ui -> jianLabel1 -> setAlignment(Qt::AlignCenter);
    ui -> jianLabel1 -> setFont(font);
    ui -> jianLabel1-> setText("减");
    ui -> jinLabel -> setAlignment(Qt::AlignCenter);
    ui -> jinLabel -> setFont(font);
    ui -> jinLabel-> setText("金卡会员");
    ui -> zhekouLabel2 -> setAlignment(Qt::AlignCenter);
    ui -> zhekouLabel2 -> setFont(font);
    ui -> zhekouLabel2-> setText("折扣");
    ui -> zheLabel2 -> setAlignment(Qt::AlignCenter);
    ui -> zheLabel2 -> setFont(font);
    ui -> zheLabel2-> setText("折");
    ui -> manLabel2 -> setAlignment(Qt::AlignCenter);
    ui -> manLabel2 -> setFont(font);
    ui -> manLabel2 -> setText("满");
    ui -> jianLabel2 -> setAlignment(Qt::AlignCenter);
    ui -> jianLabel2 -> setFont(font);
    ui -> jianLabel2 -> setText("减");
    ui -> yinLabel -> setAlignment(Qt::AlignCenter);
    ui -> yinLabel -> setFont(font);
    ui -> yinLabel-> setText("银卡会员");
    ui -> zhekouLabel3 -> setAlignment(Qt::AlignCenter);
    ui -> zhekouLabel3 -> setFont(font);
    ui -> zhekouLabel3 -> setText("折扣");
    ui -> zheLabel3 -> setAlignment(Qt::AlignCenter);
    ui -> zheLabel3 -> setFont(font);
    ui -> zheLabel3 -> setText("折");
    ui -> manLabel3 -> setAlignment(Qt::AlignCenter);
    ui -> manLabel3 -> setFont(font);
    ui -> manLabel3 -> setText("满");
    ui -> jianLabel3 -> setAlignment(Qt::AlignCenter);
    ui -> jianLabel3 -> setFont(font);
    ui -> jianLabel3 -> setText("减");

    //设置lineEdit中默认显示的内容
    ui -> lineEdit_1 -> setText(actInfo -> name);
    QString str1 = QString("%1").arg(actInfo -> rate1);
    ui -> lineEdit_2 -> setText(str1);
    QString str2 = QString("%1").arg(actInfo -> threshold1);
    ui -> lineEdit_3 -> setText(str2);
    QString str3 = QString("%1").arg(actInfo -> cut1);
    ui -> lineEdit_4 -> setText(str3);
    QString str4 = QString("%1").arg(actInfo -> rate2);
    ui -> lineEdit_5 -> setText(str4);
    QString str5 = QString("%1").arg(actInfo -> threshold2);
    ui -> lineEdit_6 -> setText(str5);
    QString str6 = QString("%1").arg(actInfo -> cut2);
    ui -> lineEdit_7 -> setText(str6);
    QString str7 = QString("%1").arg(actInfo -> rate3);
    ui -> lineEdit_8 -> setText(str7);
    QString str8 = QString("%1").arg(actInfo -> threshold3);
    ui -> lineEdit_9 -> setText(str8);
    QString str9 = QString("%1").arg(actInfo -> cut3);
    ui -> lineEdit_10 -> setText(str9);
    ui -> pushButton -> setText("确定");
    //读取lineEdit中的内容
    connect(ui -> pushButton, &QPushButton::clicked,
            [=]() {
                actInfo -> name = ui -> lineEdit_1 -> text();
                actInfo -> rate1 = ui -> lineEdit_2 -> text().toDouble();
                actInfo -> threshold1 = ui -> lineEdit_3 -> text().toInt();
                actInfo -> cut1 = ui -> lineEdit_4 -> text().toInt();
                actInfo -> rate2 = ui -> lineEdit_5 -> text().toDouble();
                actInfo -> threshold2 = ui -> lineEdit_6 -> text().toInt();
                actInfo -> cut2 = ui -> lineEdit_7 -> text().toInt();
                actInfo -> rate3 = ui -> lineEdit_8 -> text().toDouble();
                actInfo -> threshold3 = ui -> lineEdit_9 -> text().toInt();
                actInfo -> cut3 = ui -> lineEdit_10 -> text().toInt();
                this ->close();
            });
}

SetActDialog::~SetActDialog()
{
    delete ui;
}
