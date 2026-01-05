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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Trend
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *btnback;

    void setupUi(QWidget *Trend)
    {
        if (Trend->objectName().isEmpty())
            Trend->setObjectName("Trend");
        Trend->resize(554, 425);
        label = new QLabel(Trend);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 80, 48, 16));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        pushButton = new QPushButton(Trend);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 130, 75, 23));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        btnback = new QPushButton(Trend);
        btnback->setObjectName("btnback");
        btnback->setGeometry(QRect(30, 30, 75, 23));

        retranslateUi(Trend);

        QMetaObject::connectSlotsByName(Trend);
    } // setupUi

    void retranslateUi(QWidget *Trend)
    {
        Trend->setWindowTitle(QCoreApplication::translate("Trend", "Form", nullptr));
        label->setText(QCoreApplication::translate("Trend", "\350\266\213\345\212\277\345\210\206\346\236\220", nullptr));
        pushButton->setText(QCoreApplication::translate("Trend", "\347\224\237\346\210\220\350\266\213\345\212\277\345\233\276", nullptr));
        btnback->setText(QCoreApplication::translate("Trend", "\350\277\224\345\233\236\344\270\273\351\241\265\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Trend: public Ui_Trend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREND_H
