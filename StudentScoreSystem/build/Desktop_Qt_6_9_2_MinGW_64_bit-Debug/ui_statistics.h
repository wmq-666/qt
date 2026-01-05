/********************************************************************************
** Form generated from reading UI file 'statistics.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICS_H
#define UI_STATISTICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Statistics
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *label_10;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_13;
    QLabel *label_15;
    QPushButton *btnback;

    void setupUi(QWidget *Statistics)
    {
        if (Statistics->objectName().isEmpty())
            Statistics->setObjectName("Statistics");
        Statistics->resize(525, 389);
        layoutWidget = new QWidget(Statistics);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(-1, 51, 511, 341));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName("radioButton");

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout->addWidget(radioButton_2);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_2->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_18, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, label_5);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_7);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_6);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_9);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, label_8);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_11);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, label_10);


        horizontalLayout_3->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_12);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_14);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_16);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, label_17);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, label_13);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, label_15);


        horizontalLayout_3->addLayout(formLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        btnback = new QPushButton(Statistics);
        btnback->setObjectName("btnback");
        btnback->setGeometry(QRect(20, 10, 75, 23));

        retranslateUi(Statistics);

        QMetaObject::connectSlotsByName(Statistics);
    } // setupUi

    void retranslateUi(QWidget *Statistics)
    {
        Statistics->setWindowTitle(QCoreApplication::translate("Statistics", "Form", nullptr));
        label->setText(QCoreApplication::translate("Statistics", "\347\273\237\350\256\241\345\210\206\346\236\220", nullptr));
        label_2->setText(QCoreApplication::translate("Statistics", "\347\273\237\350\256\241\347\261\273\345\236\213\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("Statistics", "\345\215\225\347\247\221\347\273\237\350\256\241", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Statistics", "\345\205\250\347\247\221\347\273\237\350\256\241", nullptr));
        label_3->setText(QCoreApplication::translate("Statistics", "\350\257\276\347\250\213\351\200\211\346\213\251\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Statistics", "\347\250\213\345\272\217\350\256\276\350\256\241\345\237\272\347\241\200", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Statistics", "\351\253\230\347\255\211\346\225\260\345\255\246", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Statistics", "\345\244\247\345\255\246\350\213\261\350\257\255", nullptr));

        label_18->setText(QCoreApplication::translate("Statistics", "\347\273\237\350\256\241\347\273\223\346\236\234\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Statistics", "\345\271\263\345\235\207\345\210\206\357\274\232", nullptr));
        label_5->setText(QString());
        label_7->setText(QCoreApplication::translate("Statistics", "\346\234\200\351\253\230\345\210\206\357\274\232", nullptr));
        label_6->setText(QString());
        label_9->setText(QCoreApplication::translate("Statistics", "\346\234\200\344\275\216\345\210\206\357\274\232", nullptr));
        label_8->setText(QString());
        label_11->setText(QCoreApplication::translate("Statistics", "\345\217\212\346\240\274\347\216\207\357\274\232", nullptr));
        label_10->setText(QString());
        label_12->setText(QCoreApplication::translate("Statistics", "\344\274\230\347\247\200\347\216\207\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("Statistics", "\346\240\207\345\207\206\345\267\256\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("Statistics", "\344\272\272\346\225\260\357\274\232", nullptr));
        label_17->setText(QString());
        label_13->setText(QString());
        label_15->setText(QString());
        btnback->setText(QCoreApplication::translate("Statistics", "\350\277\224\345\233\236\344\270\273\351\241\265\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Statistics: public Ui_Statistics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICS_H
