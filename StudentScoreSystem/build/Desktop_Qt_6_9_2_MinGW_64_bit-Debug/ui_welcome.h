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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *btnlogout;
    QStackedWidget *stackedWidget;
    QWidget *PageHome;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTitle;
    QPushButton *btnscore;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnstatistics;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btntrend;
    QWidget *Page2;

    void setupUi(QWidget *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName("Welcome");
        Welcome->resize(712, 416);
        verticalLayout = new QVBoxLayout(Welcome);
        verticalLayout->setObjectName("verticalLayout");
        btnlogout = new QPushButton(Welcome);
        btnlogout->setObjectName("btnlogout");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnlogout->sizePolicy().hasHeightForWidth());
        btnlogout->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btnlogout);

        stackedWidget = new QStackedWidget(Welcome);
        stackedWidget->setObjectName("stackedWidget");
        PageHome = new QWidget();
        PageHome->setObjectName("PageHome");
        horizontalLayout = new QHBoxLayout(PageHome);
        horizontalLayout->setObjectName("horizontalLayout");
        labelTitle = new QLabel(PageHome);
        labelTitle->setObjectName("labelTitle");

        horizontalLayout->addWidget(labelTitle);

        btnscore = new QPushButton(PageHome);
        btnscore->setObjectName("btnscore");

        horizontalLayout->addWidget(btnscore);

        horizontalSpacer = new QSpacerItem(205, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnstatistics = new QPushButton(PageHome);
        btnstatistics->setObjectName("btnstatistics");

        horizontalLayout->addWidget(btnstatistics);

        horizontalSpacer_2 = new QSpacerItem(204, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btntrend = new QPushButton(PageHome);
        btntrend->setObjectName("btntrend");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btntrend->sizePolicy().hasHeightForWidth());
        btntrend->setSizePolicy(sizePolicy1);
        btntrend->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(btntrend);

        stackedWidget->addWidget(PageHome);
        Page2 = new QWidget();
        Page2->setObjectName("Page2");
        stackedWidget->addWidget(Page2);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(Welcome);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QWidget *Welcome)
    {
        Welcome->setWindowTitle(QCoreApplication::translate("Welcome", "Form", nullptr));
        btnlogout->setText(QCoreApplication::translate("Welcome", "\351\200\200\345\207\272", nullptr));
        labelTitle->setText(QString());
        btnscore->setText(QCoreApplication::translate("Welcome", "\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        btnstatistics->setText(QCoreApplication::translate("Welcome", "\346\210\220\347\273\251\347\273\237\350\256\241", nullptr));
        btntrend->setText(QCoreApplication::translate("Welcome", "\346\210\220\347\273\251\350\266\213\345\212\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
