#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"dates.h"

#include<QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     setWindowTitle("Медицинский центр");
     setWindowIcon(QIcon("C:\\Users\\ASUS\\Desktop\\build-final_course_work-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\\pictures\\icon.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


//start
void MainWindow::on_start_clicked()
{
    dates window;
    window.setModal(true);
    window.exec();
}


//exit
void MainWindow::on_exit_clicked()
{
     QApplication::exit();
}
void MainWindow::on_exit_pressed()
{
    ui->exit->setStyleSheet("border-radius: 25px; background-color: rgb(187, 22, 87)");
}




