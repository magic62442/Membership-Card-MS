/********************************************************************************
** Form generated from reading UI file 'curactdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURACTDIALOG_H
#define UI_CURACTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurActDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QTableView *tableView2;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *CurActDialog)
    {
        if (CurActDialog->objectName().isEmpty())
            CurActDialog->setObjectName(QString::fromUtf8("CurActDialog"));
        CurActDialog->resize(198, 188);
        widget = new QWidget(CurActDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1, 20, 201, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget1 = new QWidget(CurActDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 60, 201, 121));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        tableView2 = new QTableView(widget1);
        tableView2->setObjectName(QString::fromUtf8("tableView2"));

        horizontalLayout_2->addWidget(tableView2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        retranslateUi(CurActDialog);

        QMetaObject::connectSlotsByName(CurActDialog);
    } // setupUi

    void retranslateUi(QDialog *CurActDialog)
    {
        CurActDialog->setWindowTitle(QApplication::translate("CurActDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("CurActDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurActDialog: public Ui_CurActDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURACTDIALOG_H
