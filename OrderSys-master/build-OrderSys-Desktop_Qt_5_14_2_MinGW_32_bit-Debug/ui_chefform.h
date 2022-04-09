/********************************************************************************
** Form generated from reading UI file 'chefform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHEFFORM_H
#define UI_CHEFFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChefForm
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *ChefForm)
    {
        if (ChefForm->objectName().isEmpty())
            ChefForm->setObjectName(QString::fromUtf8("ChefForm"));
        ChefForm->resize(610, 377);
        label = new QLabel(ChefForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 271, 16));
        tableWidget = new QTableWidget(ChefForm);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(40, 50, 511, 231));
        tableWidget->horizontalHeader()->setDefaultSectionSize(100);
        layoutWidget = new QWidget(ChefForm);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 310, 401, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(ChefForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 10, 93, 28));

        retranslateUi(ChefForm);

        QMetaObject::connectSlotsByName(ChefForm);
    } // setupUi

    void retranslateUi(QWidget *ChefForm)
    {
        ChefForm->setWindowTitle(QCoreApplication::translate("ChefForm", "Form", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("ChefForm", "\344\270\212\350\217\234", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ChefForm", "\347\274\272\350\217\234", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ChefForm", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChefForm: public Ui_ChefForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHEFFORM_H
