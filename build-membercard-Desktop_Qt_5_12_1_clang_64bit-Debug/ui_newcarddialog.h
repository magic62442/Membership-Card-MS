/********************************************************************************
** Form generated from reading UI file 'newcarddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCARDDIALOG_H
#define UI_NEWCARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewCardDialog
{
public:
    QLabel *nameLabel;
    QLabel *sexLabel;
    QLabel *pswdLabel;
    QLabel *typeLabel;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QLineEdit *nameLine;
    QLineEdit *pswdLine;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *amountLine;
    QLabel *amountLabel;
    QLabel *phoneLabel;
    QLineEdit *phoneLine;

    void setupUi(QDialog *NewCardDialog)
    {
        if (NewCardDialog->objectName().isEmpty())
            NewCardDialog->setObjectName(QString::fromUtf8("NewCardDialog"));
        NewCardDialog->resize(457, 202);
        nameLabel = new QLabel(NewCardDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(30, 20, 70, 24));
        nameLabel->setMinimumSize(QSize(70, 24));
        sexLabel = new QLabel(NewCardDialog);
        sexLabel->setObjectName(QString::fromUtf8("sexLabel"));
        sexLabel->setGeometry(QRect(30, 60, 57, 24));
        sexLabel->setMinimumSize(QSize(36, 24));
        pswdLabel = new QLabel(NewCardDialog);
        pswdLabel->setObjectName(QString::fromUtf8("pswdLabel"));
        pswdLabel->setGeometry(QRect(30, 100, 90, 24));
        pswdLabel->setMinimumSize(QSize(90, 24));
        typeLabel = new QLabel(NewCardDialog);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setGeometry(QRect(30, 140, 90, 24));
        typeLabel->setMinimumSize(QSize(90, 24));
        checkBox_1 = new QCheckBox(NewCardDialog);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));
        checkBox_1->setGeometry(QRect(130, 60, 85, 20));
        checkBox_2 = new QCheckBox(NewCardDialog);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(180, 60, 85, 20));
        nameLine = new QLineEdit(NewCardDialog);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));
        nameLine->setGeometry(QRect(130, 20, 81, 21));
        pswdLine = new QLineEdit(NewCardDialog);
        pswdLine->setObjectName(QString::fromUtf8("pswdLine"));
        pswdLine->setGeometry(QRect(130, 100, 113, 21));
        checkBox_3 = new QCheckBox(NewCardDialog);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(130, 140, 85, 20));
        checkBox_4 = new QCheckBox(NewCardDialog);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(220, 140, 85, 20));
        checkBox_5 = new QCheckBox(NewCardDialog);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(310, 140, 85, 20));
        layoutWidget = new QWidget(NewCardDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 170, 461, 32));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(60, 0));
        pushButton->setMaximumSize(QSize(90, 30));

        horizontalLayout_7->addWidget(pushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        amountLine = new QLineEdit(NewCardDialog);
        amountLine->setObjectName(QString::fromUtf8("amountLine"));
        amountLine->setGeometry(QRect(290, 60, 61, 21));
        amountLabel = new QLabel(NewCardDialog);
        amountLabel->setObjectName(QString::fromUtf8("amountLabel"));
        amountLabel->setGeometry(QRect(220, 60, 76, 24));
        amountLabel->setMinimumSize(QSize(70, 24));
        phoneLabel = new QLabel(NewCardDialog);
        phoneLabel->setObjectName(QString::fromUtf8("phoneLabel"));
        phoneLabel->setGeometry(QRect(220, 20, 76, 24));
        phoneLabel->setMinimumSize(QSize(70, 24));
        phoneLine = new QLineEdit(NewCardDialog);
        phoneLine->setObjectName(QString::fromUtf8("phoneLine"));
        phoneLine->setGeometry(QRect(300, 20, 113, 21));

        retranslateUi(NewCardDialog);

        QMetaObject::connectSlotsByName(NewCardDialog);
    } // setupUi

    void retranslateUi(QDialog *NewCardDialog)
    {
        NewCardDialog->setWindowTitle(QApplication::translate("NewCardDialog", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("NewCardDialog", "TextLabel", nullptr));
        sexLabel->setText(QApplication::translate("NewCardDialog", "TextLabel", nullptr));
        pswdLabel->setText(QApplication::translate("NewCardDialog", "TextLabel", nullptr));
        typeLabel->setText(QApplication::translate("NewCardDialog", "TextLabel", nullptr));
        checkBox_1->setText(QApplication::translate("NewCardDialog", "CheckBox", nullptr));
        checkBox_2->setText(QApplication::translate("NewCardDialog", "CheckBox", nullptr));
        checkBox_3->setText(QApplication::translate("NewCardDialog", "CheckBox", nullptr));
        checkBox_4->setText(QApplication::translate("NewCardDialog", "CheckBox", nullptr));
        checkBox_5->setText(QApplication::translate("NewCardDialog", "CheckBox", nullptr));
        pushButton->setText(QApplication::translate("NewCardDialog", "PushButton", nullptr));
        amountLabel->setText(QApplication::translate("NewCardDialog", "TextLabel", nullptr));
        phoneLabel->setText(QApplication::translate("NewCardDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewCardDialog: public Ui_NewCardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCARDDIALOG_H
