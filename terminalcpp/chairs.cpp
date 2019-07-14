#include "chairs.h"
#include "ui_chairs.h"
#include "welcome.h"
#include "menu.h"

#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>

#define ACCESS "DRIVER={Microsoft Access Driver (*.mdb, *.accdb)};FIL={MSAccess}; DBQ=D:\\DB.mdb"

Chairs::Chairs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Chairs)
{
    ui->setupUi(this);
    mDatabase = QSqlDatabase::addDatabase("QODBC");
    mDatabase.setDatabaseName(ACCESS);

   if(!mDatabase.open())
   {
       QMessageBox::critical(this, "Error", mDatabase.lastError().text());
       return;
   }
}

Chairs::~Chairs()
{
    delete ui;
}

void Chairs::on_pushButton_clicked()
{
    mDatabase = QSqlDatabase::addDatabase("QODBC");
    mDatabase.setDatabaseName(ACCESS);

   if(!mDatabase.open())
   {
       QMessageBox::critical(this, "Error", mDatabase.lastError().text());
       return;
   }

   int quantity_of_chairs = 14;

   int value = 1;

   for (int i = 0; i < quantity_of_chairs; i++)
   {
       if(ui->comboBox->currentIndex() == value)
       {
           QSqlQueryModel *setquery = new QSqlQueryModel;
           setquery->setQuery("UPDATE Столики SET Статус = 'Заброньовано' WHERE Номер_столика = " + QString::number(value+1));
           ui->tableView->setModel(setquery);

           int quantity_of_people = ui->comboBox_2->currentIndex();
           QString full_name = ui->lineEdit->text();

           QSqlQueryModel *setquery2 = new QSqlQueryModel;
           setquery2->setQuery("UPDATE Бронювання_столиків SET Кількість_чоловік = '"+ QString::number(quantity_of_people+1) +"', Дата_бронювання = '"+ ui->calendarWidget->selectedDate().toString("dd-MM-yy") +"', ПІБ = '"+ full_name +"' WHERE Номер_столика = " + QString::number(value+1));
       }
       value++;
    }
}

void Chairs::on_pushButton_2_clicked()
{
    QSqlQueryModel *setquery3 = new QSqlQueryModel;
    setquery3->setQuery("SELECT Номер_столика, Статус FROM Столики WHERE Статус = 'Вільний'");
    ui->tableView->setModel(setquery3);
}

void Chairs::on_tableView_2_activated(const QModelIndex &index)
{

}

void Chairs::on_pushButton_3_clicked()
{
    Welcome *w = new Welcome();
    w->show();
    this->hide();
}

void Chairs::on_pushButton_36_clicked()
{
    Welcome *w = new Welcome();
    w->show();
    this->hide();
}

void Chairs::on_pushButton_37_clicked()
{
    Menu *m = new Menu();
    m->show();
    this->hide();
}
