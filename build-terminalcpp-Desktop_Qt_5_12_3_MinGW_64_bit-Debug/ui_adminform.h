/********************************************************************************
** Form generated from reading UI file 'adminform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINFORM_H
#define UI_ADMINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminForm
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QWidget *tab_2;
    QTableView *tableView_2;
    QWidget *tab_3;
    QTableView *tableView_3;
    QWidget *tab_4;
    QTableView *tableView_4;

    void setupUi(QWidget *AdminForm)
    {
        if (AdminForm->objectName().isEmpty())
            AdminForm->setObjectName(QString::fromUtf8("AdminForm"));
        AdminForm->resize(749, 509);
        tabWidget = new QTabWidget(AdminForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 751, 421));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 751, 401));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(0, 0, 751, 401));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setGeometry(QRect(0, 0, 751, 401));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tableView_4 = new QTableView(tab_4);
        tableView_4->setObjectName(QString::fromUtf8("tableView_4"));
        tableView_4->setGeometry(QRect(0, 0, 751, 401));
        tabWidget->addTab(tab_4, QString());

        retranslateUi(AdminForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminForm);
    } // setupUi

    void retranslateUi(QWidget *AdminForm)
    {
        AdminForm->setWindowTitle(QApplication::translate("AdminForm", "AdminForm", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminForm", "\320\241\320\277\321\226\320\262\321\200\320\276\320\261\321\226\321\202\320\275\320\270\320\272\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminForm", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminForm", "\320\241\321\202\320\276\320\273\320\270\320\272\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("AdminForm", "\320\221\321\200\320\276\320\275\321\216\320\262\320\260\320\275\320\275\321\217 \321\201\321\202\320\276\320\273\320\270\320\272\321\226\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminForm: public Ui_AdminForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINFORM_H
