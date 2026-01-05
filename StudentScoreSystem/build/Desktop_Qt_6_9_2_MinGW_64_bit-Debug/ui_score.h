/********************************************************************************
** Form generated from reading UI file 'score.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORE_H
#define UI_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Score
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QLabel *label_4;
    QPushButton *btnback;

    void setupUi(QWidget *Score)
    {
        if (Score->objectName().isEmpty())
            Score->setObjectName("Score");
        Score->resize(588, 438);
        layoutWidget = new QWidget(Score);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 30, 521, 381));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);


        horizontalLayout_2->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(layoutWidget);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_3->addWidget(pushButton_4);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout_3->addWidget(pushButton_5);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_3);

        btnback = new QPushButton(Score);
        btnback->setObjectName("btnback");
        btnback->setGeometry(QRect(30, 0, 75, 23));

        retranslateUi(Score);

        QMetaObject::connectSlotsByName(Score);
    } // setupUi

    void retranslateUi(QWidget *Score)
    {
        Score->setWindowTitle(QCoreApplication::translate("Score", "Form", nullptr));
        label->setText(QCoreApplication::translate("Score", "\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        label_2->setText(QCoreApplication::translate("Score", "\345\275\223\345\211\215\350\257\276\347\250\213\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Score", "\347\250\213\345\272\217\350\256\276\350\256\241\345\237\272\347\241\200", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Score", "\351\253\230\347\255\211\346\225\260\345\255\246", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Score", "\345\244\247\345\255\246\350\213\261\350\257\255", nullptr));

        pushButton->setText(QCoreApplication::translate("Score", "\346\211\271\351\207\217\345\275\225\345\205\245", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Score", "\344\277\235\345\255\230\346\210\220\347\273\251", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Score", "\346\270\205\347\251\272\350\276\223\345\205\245", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Score", "\344\270\212\344\270\200\351\241\265", nullptr));
        label_3->setText(QCoreApplication::translate("Score", "TextLabel", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Score", "\344\270\213\344\270\200\351\241\265", nullptr));
        label_4->setText(QCoreApplication::translate("Score", "TextLabel", nullptr));
        btnback->setText(QCoreApplication::translate("Score", "\350\277\224\345\233\236\344\270\273\351\241\265\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Score: public Ui_Score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORE_H
