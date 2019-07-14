#ifndef ADMINFORM_H
#define ADMINFORM_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class AdminForm;
}

class QSqlTableModel;

class AdminForm : public QWidget
{
    Q_OBJECT

public:
    explicit AdminForm(QWidget *parent = nullptr);
    ~AdminForm();

private slots:
    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::AdminForm *ui;
    QSqlTableModel *mModel;
    QSqlDatabase mDatabase;
};

#endif // ADMINFORM_H
