#include "adminform.h"
#include "ui_adminform.h"
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>

#define ACCESS "DRIVER={Microsoft Access Driver (*.mdb, *.accdb)};FIL={MSAccess}; DBQ=D:\\DB.mdb"

AdminForm::AdminForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminForm)
{
    ui->setupUi(this);
    mDatabase = QSqlDatabase::addDatabase("QODBC");
    mDatabase.setDatabaseName(ACCESS);

   if(!mDatabase.open())
   {
       QMessageBox::critical(this, "Error", mDatabase.lastError().text());
       return;
   }

   mModel = new QSqlTableModel(this);
   mModel->setTable("Співробітники");
   mModel->select();
   ui->tableView->setModel(mModel);
   mModel->insertRow(ui->tableView->currentIndex().row());

   mModel = new QSqlTableModel(this);
   mModel->setTable("Склад");
   mModel->select();
   ui->tableView_2->setModel(mModel);
   mModel->insertRow(ui->tableView->currentIndex().row());

   mModel = new QSqlTableModel(this);
   mModel->setTable("Столики");
   mModel->select();
   ui->tableView_3->setModel(mModel);
   mModel->insertRow(ui->tableView->currentIndex().row());

   mModel = new QSqlTableModel(this);
   mModel->setTable("Бронювання_столиків");
   mModel->select();
   ui->tableView_4->setModel(mModel);
   mModel->insertRow(ui->tableView->currentIndex().row());
}

AdminForm::~AdminForm()
{
    delete ui;
}

void AdminForm::on_tableView_activated(const QModelIndex &index)
{

}
