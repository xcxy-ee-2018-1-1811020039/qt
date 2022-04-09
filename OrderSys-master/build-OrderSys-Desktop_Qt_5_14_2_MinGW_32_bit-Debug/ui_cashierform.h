/********************************************************************************
** Form generated from reading UI file 'cashierform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHIERFORM_H
#define UI_CASHIERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CashierForm
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *CashierForm)
    {
        if (CashierForm->objectName().isEmpty())
            CashierForm->setObjectName(QString::fromUtf8("CashierForm"));
        CashierForm->resize(676, 368);
        label = new QLabel(CashierForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 111, 21));
        label_2 = new QLabel(CashierForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 10, 201, 21));
        tableWidget = new QTableWidget(CashierForm);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 40, 461, 271));
        label_3 = new QLabel(CashierForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(500, 40, 61, 16));
        lineEdit = new QLineEdit(CashierForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(490, 70, 113, 24));
        pushButton = new QPushButton(CashierForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(490, 100, 80, 24));
        pushButton_2 = new QPushButton(CashierForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 280, 80, 24));
        pushButton_3 = new QPushButton(CashierForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(580, 280, 80, 24));
        label_4 = new QLabel(CashierForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(490, 130, 49, 16));
        label_5 = new QLabel(CashierForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(490, 160, 49, 16));
        label_6 = new QLabel(CashierForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(490, 180, 181, 21));
        label_7 = new QLabel(CashierForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(490, 210, 131, 21));

        retranslateUi(CashierForm);

        QMetaObject::connectSlotsByName(CashierForm);
    } // setupUi

    void retranslateUi(QWidget *CashierForm)
    {
        CashierForm->setWindowTitle(QCoreApplication::translate("CashierForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("CashierForm", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("CashierForm", "\350\276\223\345\205\245\346\241\214\345\217\267\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("CashierForm", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CashierForm", "\347\273\223\345\270\220", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CashierForm", "\346\241\214\345\217\267\351\207\215\347\275\256", nullptr));
        label_4->setText(QCoreApplication::translate("CashierForm", "\347\273\237\350\256\241", nullptr));
        label_5->setText(QCoreApplication::translate("CashierForm", "\345\215\225\345\217\267\357\274\232", nullptr));
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("CashierForm", "\346\200\273\350\256\241\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CashierForm: public Ui_CashierForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHIERFORM_H
