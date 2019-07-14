/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(545, 492);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 290, 100, 23));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(1, 1, 1);\n"
"background-color: rgb(218, 123, 0);"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 170, 221, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 62, 66);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 240, 221, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(62, 62, 66);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 150, 47, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 123, 0);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(163, 260, 220, 13));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 123, 0);"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 190, 220, 13));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 123, 0);"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 290, 100, 23));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(1, 1, 1);\n"
"background-color: rgb(218, 123, 0);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 220, 70, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 123, 0);"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 320, 220, 13));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 123, 0);"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 340, 100, 23));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(1, 1, 1);\n"
"background-color: rgb(218, 123, 0);"));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Welcome", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Log in", nullptr));
        lineEdit_2->setInputMask(QString());
        label->setText(QApplication::translate("MainWindow", "Login:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "____________________________________", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "____________________________________", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "_____________you are client?______________", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Go like client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
