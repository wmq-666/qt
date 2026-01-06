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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Statistics
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnback;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QLabel *label_11;
    QLineEdit *lineEdit_4;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_16;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;

    void setupUi(QWidget *Statistics)
    {
        if (Statistics->objectName().isEmpty())
            Statistics->setObjectName("Statistics");
        Statistics->resize(1072, 664);
        gridLayout_2 = new QGridLayout(Statistics);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(423, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        btnback = new QPushButton(Statistics);
        btnback->setObjectName("btnback");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnback->sizePolicy().hasHeightForWidth());
        btnback->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnback, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label = new QLabel(Statistics);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(Statistics);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        radioButton = new QRadioButton(Statistics);
        radioButton->setObjectName("radioButton");

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(Statistics);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout->addWidget(radioButton_2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(Statistics);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(Statistics);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton = new QPushButton(Statistics);
        pushButton->setObjectName("pushButton");

        horizontalLayout_4->addWidget(pushButton);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_18 = new QLabel(Statistics);
        label_18->setObjectName("label_18");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(label_18);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_4 = new QLabel(Statistics);
        label_4->setObjectName("label_4");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_4);

        lineEdit = new QLineEdit(Statistics);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEdit);

        label_7 = new QLabel(Statistics);
        label_7->setObjectName("label_7");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_7);

        lineEdit_2 = new QLineEdit(Statistics);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, lineEdit_2);

        label_9 = new QLabel(Statistics);
        label_9->setObjectName("label_9");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_9);

        lineEdit_3 = new QLineEdit(Statistics);
        lineEdit_3->setObjectName("lineEdit_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lineEdit_3);

        label_11 = new QLabel(Statistics);
        label_11->setObjectName("label_11");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_11);

        lineEdit_4 = new QLineEdit(Statistics);
        lineEdit_4->setObjectName("lineEdit_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, lineEdit_4);


        horizontalLayout_3->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_12 = new QLabel(Statistics);
        label_12->setObjectName("label_12");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_12);

        label_14 = new QLabel(Statistics);
        label_14->setObjectName("label_14");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_14);

        label_16 = new QLabel(Statistics);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_16);

        lineEdit_5 = new QLineEdit(Statistics);
        lineEdit_5->setObjectName("lineEdit_5");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEdit_5);

        lineEdit_6 = new QLineEdit(Statistics);
        lineEdit_6->setObjectName("lineEdit_6");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, lineEdit_6);

        lineEdit_7 = new QLineEdit(Statistics);
        lineEdit_7->setObjectName("lineEdit_7");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, lineEdit_7);


        horizontalLayout_3->addLayout(formLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Statistics);

        QMetaObject::connectSlotsByName(Statistics);
    } // setupUi

    void retranslateUi(QWidget *Statistics)
    {
        Statistics->setWindowTitle(QCoreApplication::translate("Statistics", "Form", nullptr));
        btnback->setText(QCoreApplication::translate("Statistics", "\350\277\224\345\233\236\344\270\273\351\241\265\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("Statistics", "\347\273\237\350\256\241\345\210\206\346\236\220", nullptr));
        label_2->setText(QCoreApplication::translate("Statistics", "\347\273\237\350\256\241\347\261\273\345\236\213\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("Statistics", "\345\215\225\347\247\221\347\273\237\350\256\241", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Statistics", "\345\205\250\347\247\221\347\273\237\350\256\241", nullptr));
        label_3->setText(QCoreApplication::translate("Statistics", "\350\257\276\347\250\213\351\200\211\346\213\251\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Statistics", "\347\250\213\345\272\217\350\256\276\350\256\241\345\237\272\347\241\200", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Statistics", "\351\253\230\347\255\211\346\225\260\345\255\246", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Statistics", "\345\244\247\345\255\246\350\213\261\350\257\255", nullptr));

        pushButton->setText(QCoreApplication::translate("Statistics", "\350\276\223\345\207\272\347\273\223\346\236\234", nullptr));
        label_18->setText(QCoreApplication::translate("Statistics", "\347\273\237\350\256\241\347\273\223\346\236\234\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Statistics", "\345\271\263\345\235\207\345\210\206\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Statistics", "\346\234\200\351\253\230\345\210\206\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("Statistics", "\346\234\200\344\275\216\345\210\206\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("Statistics", "\345\217\212\346\240\274\347\216\207\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("Statistics", "\344\274\230\347\247\200\347\216\207\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("Statistics", "\346\240\207\345\207\206\345\267\256\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("Statistics", "\344\272\272\346\225\260\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Statistics: public Ui_Statistics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICS_H
