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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Statistics
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnback;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioSingle;
    QRadioButton *radioAll;
    QFormLayout *formLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *cbnSourse;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *cbnClass;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *btnExport;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QStackedWidget *stackedWidget;
    QWidget *PageSingle;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *editAvg;
    QLabel *label_7;
    QLineEdit *editMax;
    QLabel *label_9;
    QLineEdit *editMin;
    QLabel *label_11;
    QLineEdit *editPassRate;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QLineEdit *editExcellentRate;
    QLabel *label_14;
    QLineEdit *editStdDev;
    QLabel *label_16;
    QLineEdit *editCount;
    QWidget *PageAll;
    QTableWidget *tableStats;

    void setupUi(QWidget *Statistics)
    {
        if (Statistics->objectName().isEmpty())
            Statistics->setObjectName("Statistics");
        Statistics->resize(1072, 664);
        verticalLayout_4 = new QVBoxLayout(Statistics);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        btnback = new QPushButton(Statistics);
        btnback->setObjectName("btnback");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnback->sizePolicy().hasHeightForWidth());
        btnback->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(btnback);


        verticalLayout_4->addLayout(horizontalLayout_6);

        label = new QLabel(Statistics);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(label);

        groupBox = new QGroupBox(Statistics);
        groupBox->setObjectName("groupBox");
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        radioSingle = new QRadioButton(groupBox);
        radioSingle->setObjectName("radioSingle");

        verticalLayout->addWidget(radioSingle);

        radioAll = new QRadioButton(groupBox);
        radioAll->setObjectName("radioAll");

        verticalLayout->addWidget(radioAll);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        cbnSourse = new QComboBox(groupBox);
        cbnSourse->addItem(QString());
        cbnSourse->addItem(QString());
        cbnSourse->addItem(QString());
        cbnSourse->setObjectName("cbnSourse");

        horizontalLayout_2->addWidget(cbnSourse);


        formLayout_3->setLayout(0, QFormLayout::ItemRole::LabelRole, horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        cbnClass = new QComboBox(groupBox);
        cbnClass->setObjectName("cbnClass");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cbnClass->sizePolicy().hasHeightForWidth());
        cbnClass->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(cbnClass);


        formLayout_3->setLayout(1, QFormLayout::ItemRole::LabelRole, horizontalLayout_5);


        verticalLayout_3->addLayout(formLayout_3);


        verticalLayout_5->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        horizontalLayout_4->addWidget(pushButton);

        btnExport = new QPushButton(groupBox);
        btnExport->setObjectName("btnExport");

        horizontalLayout_4->addWidget(btnExport);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Statistics);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        stackedWidget = new QStackedWidget(groupBox_2);
        stackedWidget->setObjectName("stackedWidget");
        PageSingle = new QWidget();
        PageSingle->setObjectName("PageSingle");
        widget = new QWidget(PageSingle);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 0, 271, 179));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(widget);
        label_18->setObjectName("label_18");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(label_18);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_4);

        editAvg = new QLineEdit(widget);
        editAvg->setObjectName("editAvg");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, editAvg);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_7);

        editMax = new QLineEdit(widget);
        editMax->setObjectName("editMax");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, editMax);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_9);

        editMin = new QLineEdit(widget);
        editMin->setObjectName("editMin");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, editMin);

        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_11);

        editPassRate = new QLineEdit(widget);
        editPassRate->setObjectName("editPassRate");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, editPassRate);


        horizontalLayout_3->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_12);

        editExcellentRate = new QLineEdit(widget);
        editExcellentRate->setObjectName("editExcellentRate");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, editExcellentRate);

        label_14 = new QLabel(widget);
        label_14->setObjectName("label_14");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_14);

        editStdDev = new QLineEdit(widget);
        editStdDev->setObjectName("editStdDev");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, editStdDev);

        label_16 = new QLabel(widget);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_16);

        editCount = new QLineEdit(widget);
        editCount->setObjectName("editCount");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, editCount);


        horizontalLayout_3->addLayout(formLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(PageSingle);
        PageAll = new QWidget();
        PageAll->setObjectName("PageAll");
        tableStats = new QTableWidget(PageAll);
        if (tableStats->columnCount() < 5)
            tableStats->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableStats->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableStats->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableStats->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableStats->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableStats->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableStats->setObjectName("tableStats");
        tableStats->setGeometry(QRect(9, 9, 511, 221));
        tableStats->setColumnCount(5);
        stackedWidget->addWidget(PageAll);

        verticalLayout_6->addWidget(stackedWidget);


        verticalLayout_4->addWidget(groupBox_2);


        retranslateUi(Statistics);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Statistics);
    } // setupUi

    void retranslateUi(QWidget *Statistics)
    {
        Statistics->setWindowTitle(QCoreApplication::translate("Statistics", "Form", nullptr));
        btnback->setText(QCoreApplication::translate("Statistics", "\350\277\224\345\233\236\344\270\273\351\241\265\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("Statistics", "\347\273\237\350\256\241\345\210\206\346\236\220", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Statistics", "\347\273\237\350\256\241\346\235\241\344\273\266", nullptr));
        label_2->setText(QCoreApplication::translate("Statistics", "\347\273\237\350\256\241\347\261\273\345\236\213\357\274\232", nullptr));
        radioSingle->setText(QCoreApplication::translate("Statistics", "\345\215\225\347\247\221\347\273\237\350\256\241", nullptr));
        radioAll->setText(QCoreApplication::translate("Statistics", "\345\205\250\347\247\221\347\273\237\350\256\241", nullptr));
        label_3->setText(QCoreApplication::translate("Statistics", "\350\257\276\347\250\213\351\200\211\346\213\251\357\274\232", nullptr));
        cbnSourse->setItemText(0, QCoreApplication::translate("Statistics", "\347\250\213\345\272\217\350\256\276\350\256\241\345\237\272\347\241\200", nullptr));
        cbnSourse->setItemText(1, QCoreApplication::translate("Statistics", "\351\253\230\347\255\211\346\225\260\345\255\246", nullptr));
        cbnSourse->setItemText(2, QCoreApplication::translate("Statistics", "\345\244\247\345\255\246\350\213\261\350\257\255", nullptr));

        label_5->setText(QCoreApplication::translate("Statistics", "\347\217\255\347\272\247\351\200\211\346\213\251\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("Statistics", "\350\276\223\345\207\272\347\273\223\346\236\234", nullptr));
        btnExport->setText(QCoreApplication::translate("Statistics", "\345\257\274\345\207\272\346\212\245\350\241\250", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Statistics", "\347\273\237\350\256\241\347\273\223\346\236\234", nullptr));
        label_18->setText(QCoreApplication::translate("Statistics", "\347\273\237\350\256\241\347\273\223\346\236\234\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Statistics", "\345\271\263\345\235\207\345\210\206\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Statistics", "\346\234\200\351\253\230\345\210\206\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("Statistics", "\346\234\200\344\275\216\345\210\206\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("Statistics", "\345\217\212\346\240\274\347\216\207\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("Statistics", "\344\274\230\347\247\200\347\216\207\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("Statistics", "\346\240\207\345\207\206\345\267\256\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("Statistics", "\344\272\272\346\225\260\357\274\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableStats->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Statistics", "\350\257\276\347\250\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableStats->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Statistics", "\345\271\263\345\235\207\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableStats->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Statistics", "\346\234\200\351\253\230\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableStats->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Statistics", "\346\234\200\344\275\216\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableStats->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Statistics", "\345\217\212\346\240\274\347\216\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Statistics: public Ui_Statistics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICS_H
