/********************************************************************************
** Form generated from reading UI file 'setactdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETACTDIALOG_H
#define UI_SETACTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetActDialog
{
public:
    QLabel *nameLabel;
    QLineEdit *lineEdit_1;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *jinLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *zhekouLabel2;
    QLineEdit *lineEdit_5;
    QLabel *zheLabel2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *manLabel2;
    QLineEdit *lineEdit_6;
    QLabel *jianLabel2;
    QLineEdit *lineEdit_7;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *yinLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *zhekouLabel3;
    QLineEdit *lineEdit_8;
    QLabel *zheLabel3;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *manLabel3;
    QLineEdit *lineEdit_9;
    QLabel *jianLabel3;
    QLineEdit *lineEdit_10;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *zuanLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *zhekouLabel1;
    QLineEdit *lineEdit_2;
    QLabel *zheLabel1;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *manLabel1;
    QLineEdit *lineEdit_3;
    QLabel *jianLabel1;
    QLineEdit *lineEdit_4;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *SetActDialog)
    {
        if (SetActDialog->objectName().isEmpty())
            SetActDialog->setObjectName(QString::fromUtf8("SetActDialog"));
        SetActDialog->resize(251, 383);
        nameLabel = new QLabel(SetActDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(20, 10, 70, 20));
        nameLabel->setMinimumSize(QSize(70, 20));
        lineEdit_1 = new QLineEdit(SetActDialog);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(100, 10, 141, 21));
        layoutWidget = new QWidget(SetActDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 140, 166, 84));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        jinLabel = new QLabel(layoutWidget);
        jinLabel->setObjectName(QString::fromUtf8("jinLabel"));
        jinLabel->setMinimumSize(QSize(70, 20));
        jinLabel->setMaximumSize(QSize(70, 20));

        verticalLayout_2->addWidget(jinLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        zhekouLabel2 = new QLabel(layoutWidget);
        zhekouLabel2->setObjectName(QString::fromUtf8("zhekouLabel2"));
        zhekouLabel2->setMinimumSize(QSize(36, 20));

        horizontalLayout_3->addWidget(zhekouLabel2);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(40, 20));
        lineEdit_5->setMaximumSize(QSize(40, 20));

        horizontalLayout_3->addWidget(lineEdit_5);

        zheLabel2 = new QLabel(layoutWidget);
        zheLabel2->setObjectName(QString::fromUtf8("zheLabel2"));
        zheLabel2->setMinimumSize(QSize(20, 20));

        horizontalLayout_3->addWidget(zheLabel2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        manLabel2 = new QLabel(layoutWidget);
        manLabel2->setObjectName(QString::fromUtf8("manLabel2"));
        manLabel2->setMinimumSize(QSize(20, 20));

        horizontalLayout_4->addWidget(manLabel2);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(40, 20));

        horizontalLayout_4->addWidget(lineEdit_6);

        jianLabel2 = new QLabel(layoutWidget);
        jianLabel2->setObjectName(QString::fromUtf8("jianLabel2"));
        jianLabel2->setMinimumSize(QSize(20, 20));

        horizontalLayout_4->addWidget(jianLabel2);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setMaximumSize(QSize(40, 20));

        horizontalLayout_4->addWidget(lineEdit_7);


        verticalLayout_2->addLayout(horizontalLayout_4);

        layoutWidget_2 = new QWidget(SetActDialog);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 240, 166, 84));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        yinLabel = new QLabel(layoutWidget_2);
        yinLabel->setObjectName(QString::fromUtf8("yinLabel"));
        yinLabel->setMinimumSize(QSize(70, 20));
        yinLabel->setMaximumSize(QSize(70, 20));

        verticalLayout_3->addWidget(yinLabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        zhekouLabel3 = new QLabel(layoutWidget_2);
        zhekouLabel3->setObjectName(QString::fromUtf8("zhekouLabel3"));
        zhekouLabel3->setMinimumSize(QSize(36, 20));

        horizontalLayout_5->addWidget(zhekouLabel3);

        lineEdit_8 = new QLineEdit(layoutWidget_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(40, 20));
        lineEdit_8->setMaximumSize(QSize(40, 20));

        horizontalLayout_5->addWidget(lineEdit_8);

        zheLabel3 = new QLabel(layoutWidget_2);
        zheLabel3->setObjectName(QString::fromUtf8("zheLabel3"));
        zheLabel3->setMinimumSize(QSize(20, 20));

        horizontalLayout_5->addWidget(zheLabel3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        manLabel3 = new QLabel(layoutWidget_2);
        manLabel3->setObjectName(QString::fromUtf8("manLabel3"));
        manLabel3->setMinimumSize(QSize(20, 20));

        horizontalLayout_6->addWidget(manLabel3);

        lineEdit_9 = new QLineEdit(layoutWidget_2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setMaximumSize(QSize(40, 20));

        horizontalLayout_6->addWidget(lineEdit_9);

        jianLabel3 = new QLabel(layoutWidget_2);
        jianLabel3->setObjectName(QString::fromUtf8("jianLabel3"));
        jianLabel3->setMinimumSize(QSize(20, 20));

        horizontalLayout_6->addWidget(jianLabel3);

        lineEdit_10 = new QLineEdit(layoutWidget_2);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setMaximumSize(QSize(40, 20));

        horizontalLayout_6->addWidget(lineEdit_10);


        verticalLayout_3->addLayout(horizontalLayout_6);

        layoutWidget_3 = new QWidget(SetActDialog);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(250, 190, 251, 32));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        pushButton_2 = new QPushButton(layoutWidget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(60, 0));
        pushButton_2->setMaximumSize(QSize(90, 30));

        horizontalLayout_8->addWidget(pushButton_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        widget = new QWidget(SetActDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 166, 84));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        zuanLabel = new QLabel(widget);
        zuanLabel->setObjectName(QString::fromUtf8("zuanLabel"));
        zuanLabel->setMinimumSize(QSize(70, 20));
        zuanLabel->setMaximumSize(QSize(70, 20));

        verticalLayout->addWidget(zuanLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        zhekouLabel1 = new QLabel(widget);
        zhekouLabel1->setObjectName(QString::fromUtf8("zhekouLabel1"));
        zhekouLabel1->setMinimumSize(QSize(36, 20));

        horizontalLayout_2->addWidget(zhekouLabel1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(40, 20));
        lineEdit_2->setMaximumSize(QSize(40, 20));

        horizontalLayout_2->addWidget(lineEdit_2);

        zheLabel1 = new QLabel(widget);
        zheLabel1->setObjectName(QString::fromUtf8("zheLabel1"));
        zheLabel1->setMinimumSize(QSize(20, 20));

        horizontalLayout_2->addWidget(zheLabel1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        manLabel1 = new QLabel(widget);
        manLabel1->setObjectName(QString::fromUtf8("manLabel1"));
        manLabel1->setMinimumSize(QSize(20, 20));

        horizontalLayout->addWidget(manLabel1);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(40, 20));

        horizontalLayout->addWidget(lineEdit_3);

        jianLabel1 = new QLabel(widget);
        jianLabel1->setObjectName(QString::fromUtf8("jianLabel1"));
        jianLabel1->setMinimumSize(QSize(20, 20));

        horizontalLayout->addWidget(jianLabel1);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(40, 20));

        horizontalLayout->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout);

        widget1 = new QWidget(SetActDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(1, 344, 251, 32));
        horizontalLayout_7 = new QHBoxLayout(widget1);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(60, 0));
        pushButton->setMaximumSize(QSize(90, 30));

        horizontalLayout_7->addWidget(pushButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        retranslateUi(SetActDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), SetActDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(SetActDialog);
    } // setupUi

    void retranslateUi(QDialog *SetActDialog)
    {
        SetActDialog->setWindowTitle(QApplication::translate("SetActDialog", "Dialog", nullptr));
        nameLabel->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        jinLabel->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        zhekouLabel2->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        zheLabel2->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        manLabel2->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        jianLabel2->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        yinLabel->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        zhekouLabel3->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        zheLabel3->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        manLabel3->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        jianLabel3->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        pushButton_2->setText(QApplication::translate("SetActDialog", "PushButton", nullptr));
        zuanLabel->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        zhekouLabel1->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        zheLabel1->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        manLabel1->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        jianLabel1->setText(QApplication::translate("SetActDialog", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("SetActDialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetActDialog: public Ui_SetActDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETACTDIALOG_H
