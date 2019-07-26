#include "welcome.h"
#include "ui_welcome.h"
#include "chairs.h"
#include "menu.h"

#include <QPixmap>

Welcome::Welcome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);

    QPixmap pix("C:/Img/Меню/Logo1.png");
    ui->label_pic->setPixmap(pix.scaled(250,250,Qt::KeepAspectRatio));
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_pushButton_clicked()
{

}

void Welcome::on_pushButton_2_clicked()
{

}

void Welcome::on_pushButton_39_clicked()
{
    Chairs *chairs = new Chairs();
    chairs->show();
    this->hide();
}

void Welcome::on_pushButton_37_clicked()
{
    Menu *m = new Menu();
    m->show();
    this->hide();
}
