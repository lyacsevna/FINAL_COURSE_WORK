/********************************************************************************
** Form generated from reading UI file 'addates.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDATES_H
#define UI_ADDATES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addates
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *service;
    QLabel *label_2;
    QLineEdit *specialist;
    QLabel *label_3;
    QLineEdit *time;
    QLabel *label_4;
    QLineEdit *price;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addates)
    {
        if (addates->objectName().isEmpty())
            addates->setObjectName(QString::fromUtf8("addates"));
        addates->resize(958, 465);
        addates->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        verticalLayout = new QVBoxLayout(addates);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(addates);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(30, 100, 125);\n"
"font: 16pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(addates);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/picture/mainlogo.png")));

        horizontalLayout->addWidget(label_5);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(addates);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif Collection\";"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        service = new QLineEdit(addates);
        service->setObjectName(QString::fromUtf8("service"));
        service->setMinimumSize(QSize(0, 56));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, service);

        label_2 = new QLabel(addates);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif Collection\";"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        specialist = new QLineEdit(addates);
        specialist->setObjectName(QString::fromUtf8("specialist"));
        specialist->setMinimumSize(QSize(0, 56));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, specialist);

        label_3 = new QLabel(addates);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif Collection\";"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        time = new QLineEdit(addates);
        time->setObjectName(QString::fromUtf8("time"));
        time->setMinimumSize(QSize(0, 56));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, time);

        label_4 = new QLabel(addates);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif Collection\";"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        price = new QLineEdit(addates);
        price->setObjectName(QString::fromUtf8("price"));
        price->setMinimumSize(QSize(0, 56));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, price);

        label_7 = new QLabel(addates);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(187, 22, 87);"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_7);

        buttonBox = new QDialogButtonBox(addates);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, buttonBox);


        horizontalLayout->addLayout(formLayout_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(addates);

        QMetaObject::connectSlotsByName(addates);
    } // setupUi

    void retranslateUi(QDialog *addates)
    {
        addates->setWindowTitle(QApplication::translate("addates", "Dialog", nullptr));
        label_6->setText(QApplication::translate("addates", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\274\320\265\320\264\320\270\321\206\320\270\320\275\321\201\320\272\320\276\320\271 \321\203\321\201\320\273\321\203\320\263\320\270", nullptr));
        label_5->setText(QString());
        label->setText(QApplication::translate("addates", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\203\321\201\320\273\321\203\320\263\320\270*", nullptr));
        label_2->setText(QApplication::translate("addates", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\320\270\321\201\321\202*", nullptr));
        label_3->setText(QApplication::translate("addates", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\276\320\262\320\265\320\264\320\265\320\275\320\270\321\217*", nullptr));
        label_4->setText(QApplication::translate("addates", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214*", nullptr));
        label_7->setText(QApplication::translate("addates", "*\320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\320\275\320\276 \320\272 \320\267\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addates: public Ui_addates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDATES_H
