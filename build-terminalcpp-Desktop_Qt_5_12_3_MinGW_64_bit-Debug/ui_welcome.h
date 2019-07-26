/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton_36;
    QPushButton *pushButton_37;
    QPushButton *pushButton_39;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_pic;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->resize(800, 490);
        Welcome->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        centralwidget = new QWidget(Welcome);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 30, 81, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 123, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 220, 531, 171));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 123, 0);"));
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(360, 80, 231, 181));
        label_pic->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        Welcome->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Welcome);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Welcome->setStatusBar(statusbar);

        retranslateUi(Welcome);

        pushButton_36->setDefault(false);
        pushButton_37->setDefault(false);
        pushButton_39->setDefault(false);


        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QMainWindow *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("Welcome", "MainWindow", nullptr));
#ifndef QT_NO_WHATSTHIS
        pushButton_36->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton_36->setText(QApplication::translate("Welcome", "Home", nullptr));
        pushButton_37->setText(QApplication::translate("Welcome", "Menu", nullptr));
        pushButton_39->setText(QApplication::translate("Welcome", "Order chairs", nullptr));
        label_2->setText(QApplication::translate("Welcome", "Home", nullptr));
        label_3->setText(QApplication::translate("Welcome", "                           Welcome to our self-service terminal \"T.E.R.M.I.N.A.L.\".\n"
"\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 With its help, you can look at the menu of our restaurant and do it\n"
"\302\240\302\240\302\240\302\240\302\240            order without leaving the terminal. Our staff will receive a message\n"
"                 about your order. Your order status information is sent to your mobile\n"
"\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240             \302\240\302\240\302\240\302\240\302\240\302\240\302\240 The phone you specify to order.", nullptr));
        label_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
