/********************************************************************************
** Form generated from reading UI file 'trend.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREND_H
#define UI_TREND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Trend
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnback;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *editStudentId;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnGenerate;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *chartContainer;

    void setupUi(QWidget *Trend)
    {
        if (Trend->objectName().isEmpty())
            Trend->setObjectName("Trend");
        Trend->resize(554, 425);
        gridLayout = new QGridLayout(Trend);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(452, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        btnback = new QPushButton(Trend);
        btnback->setObjectName("btnback");

        gridLayout->addWidget(btnback, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(Trend);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(Trend);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(1, 0));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName("formLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        editStudentId = new QLineEdit(groupBox);
        editStudentId->setObjectName("editStudentId");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, editStudentId);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, comboBox);


        verticalLayout_3->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnGenerate = new QPushButton(groupBox);
        btnGenerate->setObjectName("btnGenerate");

        horizontalLayout->addWidget(btnGenerate);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);


        formLayout_2->setLayout(0, QFormLayout::ItemRole::LabelRole, verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(324, 80, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_2->setItem(0, QFormLayout::ItemRole::FieldRole, horizontalSpacer_3);


        verticalLayout->addWidget(groupBox);

        chartContainer = new QWidget(Trend);
        chartContainer->setObjectName("chartContainer");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(chartContainer->sizePolicy().hasHeightForWidth());
        chartContainer->setSizePolicy(sizePolicy2);
        chartContainer->setStyleSheet(QString::fromUtf8("background-color: white; border: 1px solid #ccc;"));

        verticalLayout->addWidget(chartContainer);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 2);


        retranslateUi(Trend);

        QMetaObject::connectSlotsByName(Trend);
    } // setupUi

    void retranslateUi(QWidget *Trend)
    {
        Trend->setWindowTitle(QCoreApplication::translate("Trend", "Form", nullptr));
        btnback->setText(QCoreApplication::translate("Trend", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("Trend", "\350\266\213\345\212\277\345\210\206\346\236\220", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Trend", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("Trend", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Trend", "\350\257\276\347\250\213\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Trend", "\347\250\213\345\272\217\350\256\276\350\256\241\345\237\272\347\241\200", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Trend", "\351\253\230\347\255\211\346\225\260\345\255\246", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Trend", "\345\244\247\345\255\246\350\213\261\350\257\255", nullptr));

        btnGenerate->setText(QCoreApplication::translate("Trend", "\347\224\237\346\210\220\350\266\213\345\212\277\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Trend: public Ui_Trend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREND_H
