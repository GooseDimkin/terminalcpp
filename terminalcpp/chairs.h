#ifndef CHAIRS_H
#define CHAIRS_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class Chairs;
}

class QSqlTableModel;

class Chairs : public QMainWindow
{
    Q_OBJECT

public:
    explicit Chairs(QWidget *parent = nullptr);
    ~Chairs();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_2_activated(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_37_clicked();

private:
    Ui::Chairs *ui;
    QSqlTableModel *mModel;
    QSqlDatabase mDatabase;
};

#endif // CHAIRS_H
