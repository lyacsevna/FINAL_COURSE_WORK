#include "dates.h"
#include "ui_dates.h"
#include"addates.h"

#include <QWidget>
#include <QFile>
#include <QDialog>
#include <QTextEdit>
#include <QIODevice>
#include <QTextStream>
#include<QTableWidget>
#include<QMessageBox>
#include<QTextCodec>

dates::dates(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dates)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("C:\\Users\\ASUS\\Desktop\\build-final_course_work-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\\pictures\\icon.png"));
    QStringList titulos;
    setWindowTitle("Список медицинских услуг");
    ui->tableWidget->setColumnCount(4);
    titulos<<"Наименование услуги"<<"Специалист"<<"Время приема"<<"Стоимость";
    ui->tableWidget->setHorizontalHeaderLabels(titulos);
}

dates::~dates()
{
    delete ui;
}


//добавление данных
void dates::on_add_clicked()
{
    int res;
    QString service;
    QString specialist;
    QString time;
    QString price;

    addates pd(this);
    pd.setWindowTitle("Добавление услуг");

    res = pd.exec();
    if (res==QDialog::Rejected)
    return;

    service=pd.service();
    specialist=pd.specialist();
    time=pd.time();
    price=pd.price();

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,SERVICE, new QTableWidgetItem(service));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,SPECIALIST, new QTableWidgetItem(specialist));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,TIME, new QTableWidgetItem(time));
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,PRICE, new QTableWidgetItem(price));
  }



//сохранение в файл
void dates::on_save_clicked()
{

    QFile file("medservice.txt");
    if (file.open(QIODevice::WriteOnly| QIODevice::Text))
    {
        QTextStream stream(&file);
        stream.setCodec("UTF-8");
        int row(ui->tableWidget->rowCount()),column(ui->tableWidget->columnCount());

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < column; ++j)
            {
                stream << (ui->tableWidget->item(i, j)->text());

                if (j < column - 1) {
                    stream << "\t";
                }
            }
            if (i < row - 1)
            {
                stream << "\n";
            }
        }

        QMessageBox::information(this, tr("Сохранение"), tr("Файл успешно сохранен."));
        file.close();
    }
    else QMessageBox::critical(this, tr("ERROR"), tr("Не удалось сохранить файл."));
}
//чтение из файла построчно
void dates::process_line(QString line)
{
    QStringList ss = line.split('\t');

    for (int i = 0; i < ss.size(); ++i) {
        ss[i] = ss[i].trimmed();
    }
    if(ui->tableWidget->rowCount() < row + 1)
        ui->tableWidget->setRowCount(row + 1);
    if(ui->tableWidget->columnCount() < ss.size())
        ui->tableWidget->setColumnCount(ss.size());

    for( int column = 0; column < ss.size(); column++)
    {
        QTableWidgetItem *newItem = new QTableWidgetItem( ss.at(column) );
        ui->tableWidget->setItem(row, column, newItem);
    }
    row++;
}

//вывод данных из файла
void dates::on_vivod_clicked()
{

    QFile file("medservice.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) QMessageBox::critical(this, tr("ERROR"), tr("Не удалось открыть файл")) ;
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);
        row = 0;
        while (!file.atEnd())
        {
            QByteArray line = file.readLine();
            process_line(line);
        }
       file.close();
}
//

// удаление строки
void dates::on_delete_2_clicked()
{
    QTableWidget* tableWidget = ui->tableWidget;
        int currentRow = tableWidget->currentRow(); // Получаем индекс текущей выбранной строки

        if (currentRow >= 0) // проверяем, выбрана ли строка
        {
            tableWidget->removeRow(currentRow);
        }
        else
        {
            QMessageBox::critical(this, tr("ERROR"), tr("Строка для удаления не выбрана"));

        }
}


//выход
void dates::on_exit_clicked()
{
    close();
}
