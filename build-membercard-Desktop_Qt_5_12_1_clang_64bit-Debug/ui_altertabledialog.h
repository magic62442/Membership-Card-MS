/********************************************************************************
** Form generated from reading UI file 'altertabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERTABLEDIALOG_H
#define UI_ALTERTABLEDIALOG_H

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

class Ui_AlterTableDialog
{
public:
    QLabel *npswdLabel;
    QCheckBox *checkBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QLabel *pswdLabel;
    QCheckBox *checkBox_2;
    QLineEdit *pswdLine;
    QCheckBox *checkBox_1;
    QLineEdit *amountLine;
    QCheckBox *checkBox_4;
    QLabel *alterLabel;
    QLineEdit *npswdLine;
    QLineEdit *nameLine;
    QLabel *nameLabel;
    QCheckBox *checkBox_5;

    void setupUi(QDialog *AlterTableDialog)
    {
        if (AlterTableDialog->objectName().isEmpty())
            AlterTableDialog->setObjectName(QString::fromUtf8("AlterTableDialog"));
        AlterTableDialog->resize(480, 193);
        npswdLabel = new QLabel(AlterTableDialog);
        npswdLabel->setObjectName(QString::fromUtf8("npswdLabel"));
        npswdLabel->setGeometry(QRect(30, 120, 90, 24));
        npswdLabel->setMinimumSize(QSize(90, 24));
        checkBox_3 = new QCheckBox(AlterTableDialog);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(220, 90, 85, 20));
        layoutWidget = new QWidget(AlterTableDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 150, 481, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(60, 0));
        pushButton->setMaximumSize(QSize(90, 30));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pswdLabel = new QLabel(AlterTableDialog);
        pswdLabel->setObjectName(QString::fromUtf8("pswdLabel"));
        pswdLabel->setGeometry(QRect(240, 20, 76, 24));
        pswdLabel->setMinimumSize(QSize(76, 24));
        checkBox_2 = new QCheckBox(AlterTableDialog);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(130, 90, 85, 20));
        pswdLine = new QLineEdit(AlterTableDialog);
        pswdLine->setObjectName(QString::fromUtf8("pswdLine"));
        pswdLine->setGeometry(QRect(300, 20, 113, 21));
        checkBox_1 = new QCheckBox(AlterTableDialog);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));
        checkBox_1->setGeometry(QRect(130, 60, 85, 20));
        amountLine = new QLineEdit(AlterTableDialog);
        amountLine->setObjectName(QString::fromUtf8("amountLine"));
        amountLine->setGeometry(QRect(230, 60, 61, 21));
        checkBox_4 = new QCheckBox(AlterTableDialog);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(310, 90, 85, 20));
        alterLabel = new QLabel(AlterTableDialog);
        alterLabel->setObjectName(QString::fromUtf8("alterLabel"));
        alterLabel->setGeometry(QRect(30, 60, 57, 24));
        alterLabel->setMinimumSize(QSize(36, 24));
        npswdLine = new QLineEdit(AlterTableDialog);
        npswdLine->setObjectName(QString::fromUtf8("npswdLine"));
        npswdLine->setGeometry(QRect(130, 120, 113, 21));
        nameLine = new QLineEdit(AlterTableDialog);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));
        nameLine->setGeometry(QRect(130, 20, 81, 21));
        nameLabel = new QLabel(AlterTableDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(30, 20, 70, 24));
        nameLabel->setMinimumSize(QSize(70, 24));
        checkBox_5 = new QCheckBox(AlterTableDialog);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(390, 90, 85, 20));

        retranslateUi(AlterTableDialog);

        QMetaObject::connectSlotsByName(AlterTableDialog);
    } // setupUi

    void retranslateUi(QDialog *AlterTableDialog)
    {
        AlterTableDialog->setWindowTitle(QApplication::translate("AlterTableDialog", "Dialog", nullptr));
        npswdLabel->setText(QApplication::translate("AlterTableDialog", "TextLabel", nullptr));
        checkBox_3->setText(QApplication::translate("AlterTableDialog", "CheckBox", nullptr));
        pushButton->setText(QApplication::translate("AlterTableDialog", "PushButton", nullptr));
        pswdLabel->setText(QApplication::translate("AlterTableDialog", "TextLabel", nullptr));
        checkBox_2->setText(QApplication::translate("AlterTableDialog", "CheckBox", nullptr));
        checkBox_1->setText(QApplication::translate("AlterTableDialog", "CheckBox", nullptr));
        checkBox_4->setText(QApplication::translate("AlterTableDialog", "CheckBox", nullptr));
        alterLabel->setText(QApplication::translate("AlterTableDialog", "TextLabel", nullptr));
        nameLabel->setText(QApplication::translate("AlterTableDialog", "TextLabel", nullptr));
        checkBox_5->setText(QApplication::translate("AlterTableDialog", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlterTableDialog: public Ui_AlterTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERTABLEDIALOG_H
