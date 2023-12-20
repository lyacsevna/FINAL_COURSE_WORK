#ifndef DATES_H
#define DATES_H

#include <QDialog>

namespace Ui {
class dates;
}

class dates : public QDialog
{
    Q_OBJECT

public:
     dates(QWidget *parent = nullptr);
    ~dates();

private slots:
    void on_add_clicked();

    void on_vivod_clicked();

    void on_delete_2_clicked();

    void on_save_clicked();

     void process_line(QString line);

     void on_exit_clicked();

private:
    Ui::dates *ui;
    int row;
    enum Columna
    {
        SERVICE,SPECIALIST,TIME,PRICE
    };
};

#endif // DATES_H
