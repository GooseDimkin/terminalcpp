#include "welcome.h"
#include "ui_welcome.h"
#include "chairs.h"
#include "menu.h"

Welcome::Welcome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_pushButton_clicked()
{
    Chairs *chairs = new Chairs();
    chairs->show();
    this->hide();
}

void Welcome::on_pushButton_2_clicked()
{
    Menu *m = new Menu();
    m->show();
    this->hide();
}
