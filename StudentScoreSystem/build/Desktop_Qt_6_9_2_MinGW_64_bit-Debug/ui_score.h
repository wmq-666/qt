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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Score
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnback;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *btnserach;
    QPushButton *btnInsert;
    QPushButton *btnSave;
    QPushButton *btnClear;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;

    void setupUi(QWidget *Score)
    {
        if (Score->objectName().isEmpty())
            Score->setObjectName("Score");
        Score->resize(588, 438);
        gridLayout = new QGridLayout(Score);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(486, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        btnback = new QPushButton(Score);
        btnback->setObjectName("btnback");

        gridLayout->addWidget(btnback, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Score);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(Score);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(Score);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        btnserach = new QPushButton(Score);
        btnserach->setObjectName("btnserach");

        horizontalLayout->addWidget(btnserach);


        horizontalLayout_2->addLayout(horizontalLayout);

        btnInsert = new QPushButton(Score);
        btnInsert->setObjectName("btnInsert");

        horizontalLayout_2->addWidget(btnInsert);

        btnSave = new QPushButton(Score);
        btnSave->setObjectName("btnSave");

        horizontalLayout_2->addWidget(btnSave);

        btnClear = new QPushButton(Score);
        btnClear->setObjectName("btnClear");

        horizontalLayout_2->addWidget(btnClear);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(Score);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");

        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);


        retranslateUi(Score);

        QMetaObject::connectSlotsByName(Score);
    } // setupUi

    void retranslateUi(QWidget *Score)
    {
        Score->setWindowTitle(QCoreApplication::translate("Score", "Form", nullptr));
        btnback->setText(QCoreApplication::translate("Score", "\350\277\224\345\233\236\344\270\273\351\241\265\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("Score", "\346\210\220\347\273\251\347\256\241\347\220\206", nullptr));
        label_2->setText(QCoreApplication::translate("Score", "\345\275\223\345\211\215\350\257\276\347\250\213\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Score", "\347\250\213\345\272\217\350\256\276\350\256\241\345\237\272\347\241\200", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Score", "\351\253\230\347\255\211\346\225\260\345\255\246", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Score", "\345\244\247\345\255\246\350\213\261\350\257\255", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Score", "\345\205\250\351\203\250\350\257\276\347\250\213", nullptr));

        btnserach->setText(QCoreApplication::translate("Score", "\346\237\245\350\257\242\346\210\220\347\273\251", nullptr));
        btnInsert->setText(QCoreApplication::translate("Score", "\346\211\271\351\207\217\345\275\225\345\205\245", nullptr));
        btnSave->setText(QCoreApplication::translate("Score", "\344\277\235\345\255\230\346\210\220\347\273\251", nullptr));
        btnClear->setText(QCoreApplication::translate("Score", "\346\270\205\347\251\272\350\276\223\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Score: public Ui_Score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORE_H
