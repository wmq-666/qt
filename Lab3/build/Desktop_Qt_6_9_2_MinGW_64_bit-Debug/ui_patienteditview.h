/********************************************************************************
** Form generated from reading UI file 'patienteditview.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTEDITVIEW_H
#define UI_PATIENTEDITVIEW_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientEditView
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QSpinBox *dbSpinWeight;
    QLabel *label_4;
    QSpinBox *dbSpinHeight;
    QLabel *label_5;
    QLineEdit *dbEditIDCard;
    QLabel *label_3;
    QLabel *label_7;
    QLineEdit *dbEditName;
    QComboBox *dbComboSex;
    QDateEdit *dbDateEditDOB;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *dbEditID;
    QLabel *label_8;
    QLineEdit *dbEditMobile;
    QLabel *label_9;
    QLineEdit *dbCreatedTimeStamp;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *PatientEditView)
    {
        if (PatientEditView->objectName().isEmpty())
            PatientEditView->setObjectName("PatientEditView");
        PatientEditView->resize(676, 574);
        horizontalLayout = new QHBoxLayout(PatientEditView);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(196, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        dbSpinWeight = new QSpinBox(PatientEditView);
        dbSpinWeight->setObjectName("dbSpinWeight");

        gridLayout->addWidget(dbSpinWeight, 6, 1, 1, 1);

        label_4 = new QLabel(PatientEditView);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        dbSpinHeight = new QSpinBox(PatientEditView);
        dbSpinHeight->setObjectName("dbSpinHeight");

        gridLayout->addWidget(dbSpinHeight, 5, 1, 1, 1);

        label_5 = new QLabel(PatientEditView);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        dbEditIDCard = new QLineEdit(PatientEditView);
        dbEditIDCard->setObjectName("dbEditIDCard");

        gridLayout->addWidget(dbEditIDCard, 2, 1, 1, 1);

        label_3 = new QLabel(PatientEditView);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_7 = new QLabel(PatientEditView);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        dbEditName = new QLineEdit(PatientEditView);
        dbEditName->setObjectName("dbEditName");

        gridLayout->addWidget(dbEditName, 1, 1, 1, 1);

        dbComboSex = new QComboBox(PatientEditView);
        dbComboSex->addItem(QString());
        dbComboSex->addItem(QString());
        dbComboSex->setObjectName("dbComboSex");

        gridLayout->addWidget(dbComboSex, 3, 1, 1, 1);

        dbDateEditDOB = new QDateEdit(PatientEditView);
        dbDateEditDOB->setObjectName("dbDateEditDOB");

        gridLayout->addWidget(dbDateEditDOB, 4, 1, 1, 1);

        label_6 = new QLabel(PatientEditView);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_2 = new QLabel(PatientEditView);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(PatientEditView);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dbEditID = new QLineEdit(PatientEditView);
        dbEditID->setObjectName("dbEditID");

        gridLayout->addWidget(dbEditID, 0, 1, 1, 1);

        label_8 = new QLabel(PatientEditView);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        dbEditMobile = new QLineEdit(PatientEditView);
        dbEditMobile->setObjectName("dbEditMobile");

        gridLayout->addWidget(dbEditMobile, 7, 1, 1, 1);

        label_9 = new QLabel(PatientEditView);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        dbCreatedTimeStamp = new QLineEdit(PatientEditView);
        dbCreatedTimeStamp->setObjectName("dbCreatedTimeStamp");

        gridLayout->addWidget(dbCreatedTimeStamp, 8, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(PatientEditView);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(PatientEditView);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(PatientEditView);

        QMetaObject::connectSlotsByName(PatientEditView);
    } // setupUi

    void retranslateUi(QWidget *PatientEditView)
    {
        PatientEditView->setWindowTitle(QCoreApplication::translate("PatientEditView", "\347\274\226\350\276\221\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("PatientEditView", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("PatientEditView", "\350\272\253\351\253\230\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("PatientEditView", "\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("PatientEditView", "\344\275\223\351\207\215\357\274\232", nullptr));
        dbComboSex->setItemText(0, QCoreApplication::translate("PatientEditView", "\347\224\267", nullptr));
        dbComboSex->setItemText(1, QCoreApplication::translate("PatientEditView", "\345\245\263", nullptr));

        label_6->setText(QCoreApplication::translate("PatientEditView", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("PatientEditView", "\345\247\223\345\220\215\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("PatientEditView", "ID\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("PatientEditView", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("PatientEditView", "\345\210\233\345\273\272\346\227\266\351\227\264:", nullptr));
        pushButton->setText(QCoreApplication::translate("PatientEditView", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PatientEditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientEditView: public Ui_PatientEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTEDITVIEW_H
