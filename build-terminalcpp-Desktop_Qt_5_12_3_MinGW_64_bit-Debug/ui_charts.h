/********************************************************************************
** Form generated from reading UI file 'charts.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTS_H
#define UI_CHARTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Charts
{
public:

    void setupUi(QWidget *Charts)
    {
        if (Charts->objectName().isEmpty())
            Charts->setObjectName(QString::fromUtf8("Charts"));
        Charts->resize(400, 300);

        retranslateUi(Charts);

        QMetaObject::connectSlotsByName(Charts);
    } // setupUi

    void retranslateUi(QWidget *Charts)
    {
        Charts->setWindowTitle(QApplication::translate("Charts", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Charts: public Ui_Charts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTS_H
