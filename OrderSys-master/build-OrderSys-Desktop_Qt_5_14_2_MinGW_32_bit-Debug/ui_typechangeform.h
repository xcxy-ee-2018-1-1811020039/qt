/********************************************************************************
** Form generated from reading UI file 'typechangeform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPECHANGEFORM_H
#define UI_TYPECHANGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_typeChangeForm
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QWidget *typeChangeForm)
    {
        if (typeChangeForm->objectName().isEmpty())
            typeChangeForm->setObjectName(QString::fromUtf8("typeChangeForm"));
        typeChangeForm->resize(377, 319);
        pushButton = new QPushButton(typeChangeForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 100, 101, 21));
        widget = new QWidget(typeChangeForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 40, 211, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        retranslateUi(typeChangeForm);

        QMetaObject::connectSlotsByName(typeChangeForm);
    } // setupUi

    void retranslateUi(QWidget *typeChangeForm)
    {
        typeChangeForm->setWindowTitle(QCoreApplication::translate("typeChangeForm", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("typeChangeForm", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("typeChangeForm", "\351\200\211\346\213\251\346\235\203\351\231\220\357\274\232", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("typeChangeForm", "\347\256\241\347\220\206\345\221\230", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("typeChangeForm", "\346\224\266\351\223\266\345\221\230", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("typeChangeForm", "\345\216\250\345\270\210", nullptr));

    } // retranslateUi

};

namespace Ui {
    class typeChangeForm: public Ui_typeChangeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPECHANGEFORM_H
