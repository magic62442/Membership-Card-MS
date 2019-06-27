#include "curactdialog.h"
#include "ui_curactdialog.h"
#include <QStandardItemModel>
#include <QFont>

CurActDialog::CurActDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CurActDialog)
{
    ui->setupUi(this);
}

CurActDialog::~CurActDialog()
{
    delete ui;
}

void CurActDialog::dispActivity()
{
    QFont font;
    font.setPointSize(20);
    ui -> label -> setAlignment(Qt::AlignCenter);
    ui -> label -> setFont(font);
    ui -> label -> setText(actInfo -> name);
    ui -> tableView2 -> horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui -> tableView2 -> verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui -> tableView2 -> horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);
    QStandardItemModel* model = new QStandardItemModel(this);
    /*设置列字段名*/
    model->setColumnCount(2);
    model->setHeaderData(0,Qt::Horizontal, "折扣");
    model->setHeaderData(1,Qt::Horizontal, "满减");

    /*设置行字段名*/
    model->setRowCount(3);
    model->setHeaderData(0,Qt::Vertical, "钻石会员");
    model->setHeaderData(1,Qt::Vertical, "金卡会员");
    model->setHeaderData(2,Qt::Vertical, "银卡会员");

    /*设置数据*/
    QString s1 = QString("%1折").arg(actInfo -> rate1);
    QString s2 = QString("%1折").arg(actInfo -> rate2);
    QString s3 = QString("%1折").arg(actInfo -> rate3);
    QString s4 = QString("满%1").arg(actInfo -> threshold1) + QString("减%1").arg(actInfo -> cut1);
    QString s5 = QString("满%1").arg(actInfo -> threshold2) + QString("减%1").arg(actInfo -> cut2);;
    QString s6 = QString("满%1").arg(actInfo -> threshold3) + QString("减%1").arg(actInfo -> cut3);
    model->setItem(0, 0, new QStandardItem(s1));
    model->setItem(1, 0, new QStandardItem(s2));
    model->setItem(2, 0, new QStandardItem(s3));
    model->setItem(0, 1, new QStandardItem(s4));
    model->setItem(1, 1, new QStandardItem(s5));
    model->setItem(2, 1, new QStandardItem(s6));
    ui -> tableView2 ->setModel(model);

}
