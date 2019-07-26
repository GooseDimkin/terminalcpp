#include "menu.h"
#include "ui_menu.h"
#include "welcome.h"
#include "chairs.h"

#include <QPixmap>
#include <QIcon>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlQuery>

#define ACCESS "DRIVER={Microsoft Access Driver (*.mdb, *.accdb)};FIL={MSAccess}; DBQ=D:\\DB.mdb"

Menu::Menu(QWidget *parent) : QWidget(parent), ui(new Ui::Menu)
{
    ui->setupUi(this);
    mDatabase = QSqlDatabase::addDatabase("QODBC");
    mDatabase.setDatabaseName(ACCESS);

   if(!mDatabase.open())
   {
       QMessageBox::critical(this, "Error", mDatabase.lastError().text());
       return;
   }

    int w2 = ui->pushButton->width();
    int h2 = ui->pushButton->height();

    ui->pushButton->setIcon(QIcon("C:/Img/Меню/1.png"));
    ui->pushButton->setIconSize(QSize(w2, h2));
    ui->pushButton_2->setIcon(QIcon("C:/Img/Меню/2.png"));
    ui->pushButton_2->setIconSize(QSize(w2, h2));
    ui->pushButton_3->setIcon(QIcon("C:/Img/Меню/3.png"));
    ui->pushButton_3->setIconSize(QSize(w2, h2));
    ui->pushButton_4->setIcon(QIcon("C:/Img/Меню/4.png"));
    ui->pushButton_4->setIconSize(QSize(w2, h2));
    ui->pushButton_5->setIcon(QIcon("C:/Img/Меню/5.png"));
    ui->pushButton_5->setIconSize(QSize(w2, h2));
    ui->pushButton_6->setIcon(QIcon("C:/Img/Меню/6.png"));
    ui->pushButton_6->setIconSize(QSize(w2, h2));
    ui->pushButton_7->setIcon(QIcon("C:/Img/Меню/7.png"));
    ui->pushButton_7->setIconSize(QSize(w2, h2));
    ui->pushButton_8->setIcon(QIcon("C:/Img/Меню/8.png"));
    ui->pushButton_8->setIconSize(QSize(w2, h2));
    ui->pushButton_9->setIcon(QIcon("C:/Img/Меню/9.png"));
    ui->pushButton_9->setIconSize(QSize(w2, h2));
    ui->pushButton_10->setIcon(QIcon("C:/Img/Меню/10.png"));
    ui->pushButton_10->setIconSize(QSize(w2, h2));
    ui->pushButton_11->setIcon(QIcon("C:/Img/Меню/11.png"));
    ui->pushButton_11->setIconSize(QSize(w2, h2));
    ui->pushButton_12->setIcon(QIcon("C:/Img/Меню/12.png"));
    ui->pushButton_12->setIconSize(QSize(w2, h2));
    ui->pushButton_13->setIcon(QIcon("C:/Img/Меню/13.png"));
    ui->pushButton_13->setIconSize(QSize(w2, h2));
    ui->pushButton_14->setIcon(QIcon("C:/Img/Меню/14.png"));
    ui->pushButton_14->setIconSize(QSize(w2, h2));
    ui->pushButton_15->setIcon(QIcon("C:/Img/Меню/15.png"));
    ui->pushButton_15->setIconSize(QSize(w2, h2));
    ui->pushButton_16->setIcon(QIcon("C:/Img/Меню/16.png"));
    ui->pushButton_16->setIconSize(QSize(w2, h2));
    ui->pushButton_17->setIcon(QIcon("C:/Img/Меню/17.png"));
    ui->pushButton_17->setIconSize(QSize(w2, h2));
    ui->pushButton_18->setIcon(QIcon("C:/Img/Меню/18.png"));
    ui->pushButton_18->setIconSize(QSize(w2, h2));
    ui->pushButton_19->setIcon(QIcon("C:/Img/Меню/19.png"));
    ui->pushButton_19->setIconSize(QSize(w2, h2));
    ui->pushButton_20->setIcon(QIcon("C:/Img/Меню/20.png"));
    ui->pushButton_20->setIconSize(QSize(w2, h2));
    ui->pushButton_21->setIcon(QIcon("C:/Img/Меню/21.png"));
    ui->pushButton_21->setIconSize(QSize(w2, h2));
    ui->pushButton_22->setIcon(QIcon("C:/Img/Меню/22.png"));
    ui->pushButton_22->setIconSize(QSize(w2, h2));
    ui->pushButton_23->setIcon(QIcon("C:/Img/Меню/23.png"));
    ui->pushButton_23->setIconSize(QSize(w2, h2));
    ui->pushButton_24->setIcon(QIcon("C:/Img/Меню/24.png"));
    ui->pushButton_24->setIconSize(QSize(w2, h2));
    ui->pushButton_25->setIcon(QIcon("C:/Img/Меню/25.png"));
    ui->pushButton_25->setIconSize(QSize(w2, h2));
    ui->pushButton_26->setIcon(QIcon("C:/Img/Меню/26.png"));
    ui->pushButton_26->setIconSize(QSize(w2, h2));
    ui->pushButton_27->setIcon(QIcon("C:/Img/Меню/27.png"));
    ui->pushButton_27->setIconSize(QSize(w2, h2));
    ui->pushButton_28->setIcon(QIcon("C:/Img/Меню/28.png"));
    ui->pushButton_28->setIconSize(QSize(w2, h2));
    ui->pushButton_29->setIcon(QIcon("C:/Img/Меню/29.png"));
    ui->pushButton_29->setIconSize(QSize(w2, h2));
    ui->pushButton_30->setIcon(QIcon("C:/Img/Меню/30.png"));
    ui->pushButton_30->setIconSize(QSize(w2, h2));
    ui->pushButton_31->setIcon(QIcon("C:/Img/Меню/31.png"));
    ui->pushButton_31->setIconSize(QSize(w2, h2));
    ui->pushButton_32->setIcon(QIcon("C:/Img/Меню/32.png"));
    ui->pushButton_32->setIconSize(QSize(w2, h2));
    ui->pushButton_33->setIcon(QIcon("C:/Img/Меню/33.png"));
    ui->pushButton_33->setIconSize(QSize(w2, h2));
    ui->pushButton_34->setIcon(QIcon("C:/Img/Меню/34.png"));
    ui->pushButton_34->setIconSize(QSize(w2, h2));
}

Menu::~Menu()
{
    delete ui;
}

void Menu::showInf(int numberOfFood)
{
    QPixmap  pix("C:/Img/Меню/"+QString::number(numberOfFood)+".png");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap  pix2("C:/Img/Charts/"+QString::number(numberOfFood)+".png");
    int w2 = ui->label_pic_2->width();
    int h2 = ui->label_pic_2->height();
    ui->label_pic_2->setPixmap(pix2.scaled(w2,h2,Qt::KeepAspectRatio));

    QSqlQuery query;
        QString nameOfFood = "SELECT Назва FROM Склад WHERE Номер_продукта = "+QString::number(numberOfFood);
        query.exec(nameOfFood);
        while (query.next())    {
            ui->lineEdit->setText(query.value(0).toString());
            break;
        }
        QString price = "SELECT Ціна FROM Склад WHERE Номер_продукта = "+QString::number(numberOfFood);
        query.exec(price);
        while (query.next())    {
            ui->lineEdit_2->setText(query.value(0).toString());
            break;
        }
        QString fatPercent = "SELECT Жири_Вiдсоток FROM Склад WHERE Номер_продукта = "+QString::number(numberOfFood);
        query.exec(fatPercent);
        while (query.next())    {
            ui->label_3->setText(query.value(0).toString() + "%");
            break;
        }
        QString carbPercent = "SELECT Вуглеводи_Вiдсоток FROM Склад WHERE Номер_продукта = "+QString::number(numberOfFood);
        query.exec(carbPercent);
        while (query.next())    {
            ui->label_4->setText(query.value(0).toString() + "%");
            break;
        }
        QString proteinPercent = "SELECT Бiлки_Вiдсоток FROM Склад WHERE Номер_продукта = "+QString::number(numberOfFood);
        query.exec(proteinPercent);
        while (query.next())    {
            ui->label_5->setText(query.value(0).toString() + "%");
            break;
        }
        QString saltPercent = "SELECT Сiль_Вiдсоток FROM Склад WHERE Номер_продукта = "+QString::number(numberOfFood);
        query.exec(saltPercent);
        while (query.next())    {
            ui->label_6->setText(query.value(0).toString() + "%");
            break;
        }
        QString fatGram = "SELECT Жири_г FROM Склад WHERE Номер_продукта = "+QString::number(numberOfFood);
        query.exec(fatGram);
        while (query.next())    {
            ui->label_7->setText(query.value(0).toString() + "g");
            break;
        }
        QString carbGram = "SELECT Вуглеводи_г FROM Склад WHERE Номер_продукта = "+QString::number(numberOfFood);
        query.exec(carbGram);
        while (query.next())    {
            ui->label_8->setText(query.value(0).toString() + "g");
            break;
        }
        QString proteinGram = "SELECT Бiлки_г FROM Склад WHERE Номер_продукта = "+QString::number(numberOfFood);
        query.exec(proteinGram);
        while (query.next())    {
            ui->label_9->setText(query.value(0).toString() + "g");
            break;
        }
        QString saltGram = "SELECT Сiль_г FROM Склад WHERE Номер_продукта = "+QString::number(numberOfFood);
        query.exec(saltGram);
        while (query.next())    {
            ui->label_10->setText(query.value(0).toString() + "g");
            break;
        }
}

void Menu::on_pushButton_clicked()
{
    showInf(1);
}

void Menu::on_pushButton_2_clicked()
{
    showInf(2);
}

void Menu::on_pushButton_3_clicked()
{
    showInf(3);
}

void Menu::on_pushButton_4_clicked()
{
    showInf(4);
}

void Menu::on_pushButton_5_clicked()
{
    showInf(5);
}

void Menu::on_pushButton_6_clicked()
{
    showInf(6);
}

void Menu::on_pushButton_7_clicked()
{
    showInf(7);
}

void Menu::on_pushButton_8_clicked()
{
    showInf(8);
}

void Menu::on_pushButton_9_clicked()
{
    showInf(9);
}

void Menu::on_pushButton_10_clicked()
{
    showInf(10);
}

void Menu::on_pushButton_11_clicked()
{
    showInf(11);
}

void Menu::on_pushButton_12_clicked()
{
    showInf(12);
}

void Menu::on_pushButton_13_clicked()
{
    showInf(13);
}

void Menu::on_pushButton_14_clicked()
{
    showInf(14);
}

void Menu::on_pushButton_15_clicked()
{
    showInf(15);
}

void Menu::on_pushButton_16_clicked()
{
    showInf(16);
}

void Menu::on_pushButton_17_clicked()
{
    showInf(17);
}

void Menu::on_pushButton_18_clicked()
{
    showInf(18);
}

void Menu::on_pushButton_19_clicked()
{
    showInf(19);
}

void Menu::on_pushButton_20_clicked()
{
    showInf(20);
}

void Menu::on_pushButton_21_clicked()
{
    showInf(21);
}

void Menu::on_pushButton_22_clicked()
{
    showInf(22);
}

void Menu::on_pushButton_23_clicked()
{
    showInf(23);
}

void Menu::on_pushButton_24_clicked()
{
    showInf(24);
}

void Menu::on_pushButton_25_clicked()
{
    showInf(25);
}

void Menu::on_pushButton_26_clicked()
{
    showInf(26);
}

void Menu::on_pushButton_27_clicked()
{
    showInf(27);
}

void Menu::on_pushButton_28_clicked()
{
    showInf(28);
}

void Menu::on_pushButton_29_clicked()
{
    showInf(29);
}

void Menu::on_pushButton_30_clicked()
{
    showInf(30);
}

void Menu::on_pushButton_31_clicked()
{
    showInf(31);
}

void Menu::on_pushButton_32_clicked()
{
    showInf(32);
}

void Menu::on_pushButton_33_clicked()
{
    showInf(33);
}

void Menu::on_pushButton_34_clicked()
{
    showInf(34);
}

void Menu::on_pushButton_35_clicked()
{

}

void Menu::on_pushButton_36_clicked()
{
    Welcome *w = new Welcome();
    w->show();
    this->hide();
}

void Menu::on_pushButton_39_clicked()
{
    Chairs *ch = new Chairs();
    ch->show();
    this->hide();
}

void Menu::on_pushButton_38_clicked()
{
    Welcome *w = new Welcome();
    w->show();
    this->hide();
}
