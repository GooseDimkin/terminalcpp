#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "welcome.h"
#include "adminform.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix("C:/Img/Меню/LogoInLoginMenu.png");
    ui->label_pic->setPixmap(pix.scaled(235,235,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString login = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if(login == "Admin" && password == "1337")
    {
        AdminForm *af = new AdminForm();
        af->show();
        this->hide();
    }
    else
    {
        QMessageBox qm;
        qm.setText("Login or password error!");
        qm.exec();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    qApp->exit();
}

void MainWindow::on_pushButton_3_clicked()
{
    Welcome *wc = new Welcome();
    wc->show();
    this->hide();
}
