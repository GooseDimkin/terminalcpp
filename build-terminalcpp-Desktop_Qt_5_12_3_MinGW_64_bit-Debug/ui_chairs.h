/********************************************************************************
** Form generated from reading UI file 'chairs.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAIRS_H
#define UI_CHAIRS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chairs
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QComboBox *comboBox_2;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame;
    QPushButton *pushButton_36;
    QPushButton *pushButton_37;
    QPushButton *pushButton_39;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Chairs)
    {
        if (Chairs->objectName().isEmpty())
            Chairs->setObjectName(QString::fromUtf8("Chairs"));
        Chairs->resize(1003, 625);
        Chairs->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        centralwidget = new QWidget(Chairs);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(240, 180, 256, 351));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(670, 490, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(1, 1, 1);\n"
"background-color: rgb(218, 123, 0);"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(240, 120, 81, 22));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(450, 120, 141, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"color: rgb(1, 1, 1);"));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(340, 120, 91, 22));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(640, 110, 312, 183));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 490, 111, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(1, 1, 1);\n"
"background-color: rgb(218, 123, 0);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 100, 81, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 123, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(340, 100, 91, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 123, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(450, 100, 47, 13));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 123, 0);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 191, 731));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_36 = new QPushButton(frame);
        pushButton_36->setObjectName(QString::fromUtf8("pushButton_36"));
        pushButton_36->setGeometry(QRect(0, 60, 191, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushButton_36->setFont(font);
        pushButton_36->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_36->setMouseTracking(false);
        pushButton_36->setFocusPolicy(Qt::StrongFocus);
        pushButton_36->setAutoFillBackground(false);
        pushButton_36->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);\n"
"color: rgb(255, 123, 0);"));
        pushButton_36->setFlat(true);
        pushButton_37 = new QPushButton(frame);
        pushButton_37->setObjectName(QString::fromUtf8("pushButton_37"));
        pushButton_37->setGeometry(QRect(0, 130, 191, 41));
        pushButton_37->setFont(font);
        pushButton_37->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_37->setMouseTracking(false);
        pushButton_37->setFocusPolicy(Qt::StrongFocus);
        pushButton_37->setAutoFillBackground(false);
        pushButton_37->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);\n"
"color: rgb(255, 123, 0);"));
        pushButton_37->setFlat(true);
        pushButton_39 = new QPushButton(frame);
        pushButton_39->setObjectName(QString::fromUtf8("pushButton_39"));
        pushButton_39->setGeometry(QRect(0, 200, 191, 41));
        pushButton_39->setFont(font);
        pushButton_39->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_39->setMouseTracking(false);
        pushButton_39->setFocusPolicy(Qt::StrongFocus);
        pushButton_39->setAutoFillBackground(false);
        pushButton_39->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 64, 64);\n"
"color: rgb(255, 123, 0);"));
        pushButton_39->setFlat(true);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(900, 560, 75, 23));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 30, 171, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 123, 0);"));
        Chairs->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Chairs);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Chairs->setStatusBar(statusbar);

        retranslateUi(Chairs);

        pushButton_36->setDefault(false);
        pushButton_37->setDefault(false);
        pushButton_39->setDefault(false);


        QMetaObject::connectSlotsByName(Chairs);
    } // setupUi

    void retranslateUi(QMainWindow *Chairs)
    {
        Chairs->setWindowTitle(QApplication::translate("Chairs", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("Chairs", "Reserve", nullptr));
        comboBox->setItemText(0, QApplication::translate("Chairs", "1", nullptr));
        comboBox->setItemText(1, QApplication::translate("Chairs", "2", nullptr));
        comboBox->setItemText(2, QApplication::translate("Chairs", "3", nullptr));
        comboBox->setItemText(3, QApplication::translate("Chairs", "4", nullptr));
        comboBox->setItemText(4, QApplication::translate("Chairs", "5", nullptr));
        comboBox->setItemText(5, QApplication::translate("Chairs", "6", nullptr));
        comboBox->setItemText(6, QApplication::translate("Chairs", "7", nullptr));
        comboBox->setItemText(7, QApplication::translate("Chairs", "8", nullptr));
        comboBox->setItemText(8, QApplication::translate("Chairs", "9", nullptr));
        comboBox->setItemText(9, QApplication::translate("Chairs", "10", nullptr));
        comboBox->setItemText(10, QApplication::translate("Chairs", "11", nullptr));
        comboBox->setItemText(11, QApplication::translate("Chairs", "12", nullptr));
        comboBox->setItemText(12, QApplication::translate("Chairs", "13", nullptr));
        comboBox->setItemText(13, QApplication::translate("Chairs", "14", nullptr));

        comboBox_2->setItemText(0, QApplication::translate("Chairs", "1", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("Chairs", "2", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("Chairs", "3", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("Chairs", "4", nullptr));

        pushButton_2->setText(QApplication::translate("Chairs", "Show/Update table", nullptr));
        label->setText(QApplication::translate("Chairs", "number of chair", nullptr));
        label_2->setText(QApplication::translate("Chairs", "quantity of people", nullptr));
        label_3->setText(QApplication::translate("Chairs", "Full name", nullptr));
#ifndef QT_NO_WHATSTHIS
        pushButton_36->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton_36->setText(QApplication::translate("Chairs", "Home", nullptr));
        pushButton_37->setText(QApplication::translate("Chairs", "Menu", nullptr));
        pushButton_39->setText(QApplication::translate("Chairs", "Order chairs", nullptr));
        pushButton_3->setText(QApplication::translate("Chairs", "Back >", nullptr));
        label_4->setText(QApplication::translate("Chairs", "Chairs order", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chairs: public Ui_Chairs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAIRS_H
