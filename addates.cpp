#include "addates.h"
#include "ui_addates.h"
#include<QMessageBox>
#include<QIcon>



addates::addates(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addates)
{
setWindowIcon(QIcon("C:\\Users\\ASUS\\Desktop\\build-final_course_work-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\\pictures\\icon.png"));
    ui->setupUi(this);
}

addates::~addates()
{
    delete ui;
}

QString  addates::service() const
{
    return ui->service->text();
}
QString addates::specialist() const
{
    return ui->specialist->text();
}
QString addates::time() const
{
    return ui->time->text();
}
QString addates::price() const
{
    return ui->price->text();
}


void addates::on_buttonBox_accepted()
{
    if (ui ->service -> text().isEmpty() || ui ->specialist -> text().isEmpty() ||ui ->time -> text().isEmpty() || ui ->price -> text().isEmpty())
    {
        QMessageBox::warning(this, "WARNING", "Заполните все поля!");
    }
    else
    {
          accept();
    };
}


void addates::on_buttonBox_rejected()
{
    reject();
}

