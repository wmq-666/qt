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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnscore;
    QPushButton *btnstatistics;
    QPushButton *btntrend;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnlogout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QLabel *label_6;
    QDateEdit *dateEdit_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QWidget *widget2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(554, 425);
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(9, 9, 48, 16));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(Form);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 150, 426, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        btnscore = new QPushButton(layoutWidget);
        btnscore->setObjectName("btnscore");

        horizontalLayout_6->addWidget(btnscore);

        btnstatistics = new QPushButton(layoutWidget);
        btnstatistics->setObjectName("btnstatistics");

        horizontalLayout_6->addWidget(btnstatistics);

        btntrend = new QPushButton(layoutWidget);
        btntrend->setObjectName("btntrend");
        btntrend->setMinimumSize(QSize(0, 0));

        horizontalLayout_6->addWidget(btntrend);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        labelTitle = new QLabel(layoutWidget);
        labelTitle->setObjectName("labelTitle");

        horizontalLayout_5->addWidget(labelTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        btnlogout = new QPushButton(layoutWidget);
        btnlogout->setObjectName("btnlogout");

        horizontalLayout_5->addWidget(btnlogout);

        widget = new QWidget(Form);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_2->addWidget(comboBox);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(label_5);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_4->addWidget(dateEdit);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_6);

        dateEdit_2 = new QDateEdit(widget);
        dateEdit_2->setObjectName("dateEdit_2");

        horizontalLayout_4->addWidget(dateEdit_2);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        widget1 = new QWidget(Form);
        widget1->setObjectName("widget1");
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(pushButton);

        widget2 = new QWidget(widget1);
        widget2->setObjectName("widget2");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget2->sizePolicy().hasHeightForWidth());
        widget2->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(widget2);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "\350\266\213\345\212\277\345\210\206\346\236\220", nullptr));
        btnscore->setText(QCoreApplication::translate("Form", "\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        btnstatistics->setText(QCoreApplication::translate("Form", "\346\210\220\347\273\251\347\273\237\350\256\241", nullptr));
        btntrend->setText(QCoreApplication::translate("Form", "\346\210\220\347\273\251\350\266\213\345\212\277", nullptr));
        labelTitle->setText(QString());
        btnlogout->setText(QCoreApplication::translate("Form", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\345\210\206\346\236\220\350\256\276\347\275\256\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "\345\255\246\347\224\237\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "\345\275\223\345\211\215\350\257\276\347\250\213\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Form", "\347\250\213\345\272\217\350\256\276\350\256\241\345\237\272\347\241\200", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Form", "\351\253\230\347\255\211\346\225\260\345\255\246", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Form", "\345\244\247\345\255\246\350\213\261\350\257\255", nullptr));

        label_5->setText(QCoreApplication::translate("Form", "\346\227\266\351\227\264\350\214\203\345\233\264\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Form", "\345\210\260", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "\347\224\237\346\210\220\350\266\213\345\212\277\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREND_H
