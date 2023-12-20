#ifndef ADDATES_H
#define ADDATES_H

#include <QDialog>

namespace Ui {
class addates;
}

class addates : public QDialog
{
    Q_OBJECT

public:
    explicit addates(QWidget *parent = nullptr);
    ~addates();
    QString service() const;
    QString specialist() const;
    QString time() const;
    QString price() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::addates *ui;

};

#endif // ADDATES_H
