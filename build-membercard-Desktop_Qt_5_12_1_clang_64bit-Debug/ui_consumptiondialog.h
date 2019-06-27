/********************************************************************************
** Form generated from reading UI file 'consumptiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSUMPTIONDIALOG_H
#define UI_CONSUMPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsumptionDialog
{
public:
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QLabel *label_7;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *ConsumptionDialog)
    {
        if (ConsumptionDialog->objectName().isEmpty())
            ConsumptionDialog->setObjectName(QString::fromUtf8("ConsumptionDialog"));
        ConsumptionDialog->resize(380, 291);
        label_1 = new QLabel(ConsumptionDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(30, 20, 70, 24));
        label_1->setMinimumSize(QSize(70, 24));
        label_2 = new QLabel(ConsumptionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 281, 24));
        label_2->setMinimumSize(QSize(0, 24));
        label_3 = new QLabel(ConsumptionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 80, 201, 24));
        label_3->setMinimumSize(QSize(0, 24));
        label_6 = new QLabel(ConsumptionDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 170, 360, 24));
        label_6->setMinimumSize(QSize(360, 24));
        label_5 = new QLabel(ConsumptionDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 140, 90, 24));
        label_5->setMinimumSize(QSize(90, 24));
        label_4 = new QLabel(ConsumptionDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 110, 211, 24));
        label_4->setMinimumSize(QSize(0, 24));
        lineEdit = new QLineEdit(ConsumptionDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 20, 61, 21));
        lineEdit_2 = new QLineEdit(ConsumptionDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 140, 61, 21));
        textEdit = new QTextEdit(ConsumptionDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 200, 171, 51));
        label_7 = new QLabel(ConsumptionDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 200, 57, 24));
        label_7->setMinimumSize(QSize(0, 24));
        widget = new QWidget(ConsumptionDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-3, 260, 391, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(60, 0));
        pushButton->setMaximumSize(QSize(90, 30));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        retranslateUi(ConsumptionDialog);

        QMetaObject::connectSlotsByName(ConsumptionDialog);
    } // setupUi

    void retranslateUi(QDialog *ConsumptionDialog)
    {
        ConsumptionDialog->setWindowTitle(QApplication::translate("ConsumptionDialog", "Dialog", nullptr));
        label_1->setText(QApplication::translate("ConsumptionDialog", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("ConsumptionDialog", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("ConsumptionDialog", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("ConsumptionDialog", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("ConsumptionDialog", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("ConsumptionDialog", "TextLabel", nullptr));
        label_7->setText(QApplication::translate("ConsumptionDialog", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("ConsumptionDialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsumptionDialog: public Ui_ConsumptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSUMPTIONDIALOG_H
