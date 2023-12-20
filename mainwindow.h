#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_exit_clicked();

    void on_exit_pressed();

    void on_start_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
