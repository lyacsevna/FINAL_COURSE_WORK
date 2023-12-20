/********************************************************************************
** Form generated from reading UI file 'dates.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATES_H
#define UI_DATES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dates
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *save;
    QPushButton *vivod;
    QPushButton *delete_2;
    QPushButton *exit;

    void setupUi(QDialog *dates)
    {
        if (dates->objectName().isEmpty())
            dates->setObjectName(QString::fromUtf8("dates"));
        dates->resize(1265, 737);
        dates->setMinimumSize(QSize(1265, 737));
        verticalLayout = new QVBoxLayout(dates);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(dates);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif Collection\";\n"
"color: rgb(38, 131, 162);"));
        tableWidget->horizontalHeader()->setMinimumSectionSize(200);
        tableWidget->horizontalHeader()->setDefaultSectionSize(307);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(dates);
        add->setObjectName(QString::fromUtf8("add"));
        add->setMinimumSize(QSize(245, 67));
        add->setStyleSheet(QString::fromUtf8("font: 16pt \"Sans Serif Collection\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(38, 131, 162);\n"
"border-radius: 10px;\n"
""));

        horizontalLayout->addWidget(add);

        save = new QPushButton(dates);
        save->setObjectName(QString::fromUtf8("save"));
        save->setMinimumSize(QSize(245, 67));
        save->setStyleSheet(QString::fromUtf8("font: 16pt \"Sans Serif Collection\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(38, 131, 162);\n"
"border-radius: 10px;\n"
""));

        horizontalLayout->addWidget(save);

        vivod = new QPushButton(dates);
        vivod->setObjectName(QString::fromUtf8("vivod"));
        vivod->setMinimumSize(QSize(245, 67));
        vivod->setStyleSheet(QString::fromUtf8("font: 16pt \"Sans Serif Collection\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(38, 131, 162);\n"
"border-radius: 10px;\n"
"\n"
"\n"
""));

        horizontalLayout->addWidget(vivod);

        delete_2 = new QPushButton(dates);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setMinimumSize(QSize(245, 67));
        delete_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Sans Serif Collection\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(187, 22, 87);\n"
"border-radius: 10px;\n"
""));

        horizontalLayout->addWidget(delete_2);

        exit = new QPushButton(dates);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setMinimumSize(QSize(245, 67));
        exit->setStyleSheet(QString::fromUtf8("font: 16pt \"Sans Serif Collection\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(38, 131, 162);\n"
"border-radius: 10px;\n"
"\n"
""));

        horizontalLayout->addWidget(exit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(dates);

        QMetaObject::connectSlotsByName(dates);
    } // setupUi

    void retranslateUi(QDialog *dates)
    {
        dates->setWindowTitle(QApplication::translate("dates", "Dialog", nullptr));
        add->setText(QApplication::translate("dates", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        save->setText(QApplication::translate("dates", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        vivod->setText(QApplication::translate("dates", "\320\262\321\213\320\262\320\276\320\264", nullptr));
        delete_2->setText(QApplication::translate("dates", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        exit->setText(QApplication::translate("dates", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dates: public Ui_dates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATES_H
