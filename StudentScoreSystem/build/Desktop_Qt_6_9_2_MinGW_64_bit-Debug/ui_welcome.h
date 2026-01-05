/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *labelTitle;
    QPushButton *btnlogout;
    QPushButton *btnscore;
    QPushButton *btntrend;
    QPushButton *btnstatistics;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(598, 416);
        labelTitle = new QLabel(Form);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setGeometry(QRect(316, 51, 16, 16));
        btnlogout = new QPushButton(Form);
        btnlogout->setObjectName("btnlogout");
        btnlogout->setGeometry(QRect(520, 0, 75, 23));
        btnscore = new QPushButton(Form);
        btnscore->setObjectName("btnscore");
        btnscore->setGeometry(QRect(100, 190, 75, 23));
        btntrend = new QPushButton(Form);
        btntrend->setObjectName("btntrend");
        btntrend->setGeometry(QRect(430, 190, 75, 23));
        btntrend->setMinimumSize(QSize(0, 0));
        btnstatistics = new QPushButton(Form);
        btnstatistics->setObjectName("btnstatistics");
        btnstatistics->setGeometry(QRect(250, 180, 75, 23));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        labelTitle->setText(QString());
        btnlogout->setText(QCoreApplication::translate("Form", "\351\200\200\345\207\272", nullptr));
        btnscore->setText(QCoreApplication::translate("Form", "\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        btntrend->setText(QCoreApplication::translate("Form", "\346\210\220\347\273\251\350\266\213\345\212\277", nullptr));
        btnstatistics->setText(QCoreApplication::translate("Form", "\346\210\220\347\273\251\347\273\237\350\256\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
