/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *address_2;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_8;
    QLabel *phone_2;
    QSpacerItem *horizontalSpacer_23;
    QVBoxLayout *verticalLayout_8;
    QLabel *time1_2;
    QLabel *time_2;
    QSpacerItem *horizontalSpacer_24;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_6;
    QLabel *title1_2;
    QLabel *title2_2;
    QSpacerItem *verticalSpacer_7;
    QLabel *uptitle_2;
    QLabel *downtitle_2;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *start;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1363, 834);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_9 = new QVBoxLayout(centralwidget);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_17);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/picture/mainlogo_small.png")));

        horizontalLayout_6->addWidget(label_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        address_2 = new QLabel(centralwidget);
        address_2->setObjectName(QString::fromUtf8("address_2"));
        address_2->setStyleSheet(QString::fromUtf8("color: rgb(38, 130, 161);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 15pt \"MS Shell Dlg 2\";"));

        verticalLayout_7->addWidget(address_2);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(38, 131, 162);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 15pt \"MS Shell Dlg 2\";"));

        verticalLayout_7->addWidget(label_7);


        horizontalLayout_6->addLayout(verticalLayout_7);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_18);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_19);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_20);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_21);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_22);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/picture/pictures/phonesmall.png")));

        horizontalLayout_6->addWidget(label_8);

        phone_2 = new QLabel(centralwidget);
        phone_2->setObjectName(QString::fromUtf8("phone_2"));
        phone_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Sans Serif Collection\";\n"
"color:rgb(22, 78, 117)"));

        horizontalLayout_6->addWidget(phone_2);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_23);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        time1_2 = new QLabel(centralwidget);
        time1_2->setObjectName(QString::fromUtf8("time1_2"));
        time1_2->setStyleSheet(QString::fromUtf8("color:rgb(22, 78, 117);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_8->addWidget(time1_2);

        time_2 = new QLabel(centralwidget);
        time_2->setObjectName(QString::fromUtf8("time_2"));
        time_2->setStyleSheet(QString::fromUtf8("color:rgb(22, 78, 117);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_8->addWidget(time_2);


        horizontalLayout_6->addLayout(verticalLayout_8);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_24);


        verticalLayout_6->addLayout(horizontalLayout_6);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(38, 130, 161);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_2);


        verticalLayout_9->addLayout(verticalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/picture/mainpicture.jpg")));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_14);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        title1_2 = new QLabel(centralwidget);
        title1_2->setObjectName(QString::fromUtf8("title1_2"));
        title1_2->setStyleSheet(QString::fromUtf8("font: 35pt \"MS Shell Dlg 2\";"));

        verticalLayout_4->addWidget(title1_2);

        title2_2 = new QLabel(centralwidget);
        title2_2->setObjectName(QString::fromUtf8("title2_2"));
        title2_2->setStyleSheet(QString::fromUtf8("font: 35pt \"MS Shell Dlg 2\";\n"
"color: rgb(30, 100, 125);"));

        verticalLayout_4->addWidget(title2_2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        uptitle_2 = new QLabel(centralwidget);
        uptitle_2->setObjectName(QString::fromUtf8("uptitle_2"));
        uptitle_2->setStyleSheet(QString::fromUtf8("color: rgb(30, 100, 125);\n"
"font: 16pt \"MS Shell Dlg 2\";"));

        verticalLayout_4->addWidget(uptitle_2);

        downtitle_2 = new QLabel(centralwidget);
        downtitle_2->setObjectName(QString::fromUtf8("downtitle_2"));
        downtitle_2->setStyleSheet(QString::fromUtf8("color: rgb(30, 100, 125);\n"
"font: 16pt \"MS Shell Dlg 2\";"));

        verticalLayout_4->addWidget(downtitle_2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        start = new QPushButton(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setMinimumSize(QSize(280, 67));
        start->setStyleSheet(QString::fromUtf8("font: 16pt \"Sans Serif Collection\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(38, 131, 162);\n"
"border-radius: 10px;\n"
""));

        horizontalLayout_3->addWidget(start);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_15);

        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setMinimumSize(QSize(50, 50));
        exit->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: rgb(38, 130, 161);\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/picture/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon);

        horizontalLayout_3->addWidget(exit);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_4);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_16);


        verticalLayout_9->addLayout(horizontalLayout_5);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_10);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1363, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_6->setText(QString());
        address_2->setText(QApplication::translate("MainWindow", " \320\234\320\265\320\264\320\270\321\206\320\270\320\275\321\201\320\272\320\270\320\271 \321\206\320\265\320\275\321\202\321\200", nullptr));
        label_7->setText(QApplication::translate("MainWindow", " M-Clinic", nullptr));
        label_8->setText(QString());
        phone_2->setText(QApplication::translate("MainWindow", " +7 (999) 252-00-33  ", nullptr));
        time1_2->setText(QApplication::translate("MainWindow", "\320\237\320\235-\320\237\320\242: 9.00-18.00", nullptr));
        time_2->setText(QApplication::translate("MainWindow", "\320\241\320\221-\320\222\320\241:  9.00-15.00", nullptr));
        label_5->setText(QString());
        title1_2->setText(QApplication::translate("MainWindow", "\320\234\320\265\320\264\320\270\321\206\320\270\320\275\321\201\320\272\320\270\320\271 \321\206\320\265\320\275\321\202\321\200 ", nullptr));
        title2_2->setText(QApplication::translate("MainWindow", "\320\262 \320\222\320\276\321\200\320\276\320\275\320\265\320\266\320\265", nullptr));
        uptitle_2->setText(QApplication::translate("MainWindow", "\342\200\224 \320\273\320\270\321\206\320\265\320\275\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\274\320\265\320\264\320\270\321\206\320\270\320\275\321\201\320\272\320\270\320\265 \321\203\321\201\320\273\321\203\320\263\320\270 ", nullptr));
        downtitle_2->setText(QApplication::translate("MainWindow", "    \321\210\320\270\321\200\320\276\320\272\320\276\320\263\320\276 \320\277\321\200\320\276\321\204\320\270\320\273\321\217", nullptr));
        start->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214\321\201\321\217 \320\275\320\260 \320\277\321\200\320\270\320\265\320\274", nullptr));
        exit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
