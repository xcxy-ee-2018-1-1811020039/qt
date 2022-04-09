/********************************************************************************
** Form generated from reading UI file 'managerform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERFORM_H
#define UI_MANAGERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagerForm
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QComboBox *comboBox;
    QTableWidget *tableWidget_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QLabel *label;
    QWidget *tab_3;
    QTableWidget *tableWidget_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;

    void setupUi(QWidget *ManagerForm)
    {
        if (ManagerForm->objectName().isEmpty())
            ManagerForm->setObjectName(QString::fromUtf8("ManagerForm"));
        ManagerForm->resize(650, 374);
        tabWidget = new QTabWidget(ManagerForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 631, 331));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 95, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        tableWidget = new QTableWidget(tab);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(110, 20, 381, 251));
        tableWidget->horizontalHeader()->setDefaultSectionSize(127);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        comboBox = new QComboBox(tab_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 10, 101, 21));
        tableWidget_2 = new QTableWidget(tab_2);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 40, 601, 241));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 10, 161, 21));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 10, 80, 24));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 10, 101, 21));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableWidget_3 = new QTableWidget(tab_3);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(130, 30, 381, 231));
        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 95, 241));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget1);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget1);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(layoutWidget1);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout_2->addWidget(pushButton_9);

        tabWidget->addTab(tab_3, QString());
        pushButton_10 = new QPushButton(ManagerForm);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(540, 20, 93, 28));
        pushButton_11 = new QPushButton(ManagerForm);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(430, 20, 93, 28));

        retranslateUi(ManagerForm);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ManagerForm);
    } // setupUi

    void retranslateUi(QWidget *ManagerForm)
    {
        ManagerForm->setWindowTitle(QCoreApplication::translate("ManagerForm", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ManagerForm", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ManagerForm", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ManagerForm", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ManagerForm", "\344\277\256\346\224\271\346\235\203\351\231\220", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ManagerForm", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("ManagerForm", "\345\275\223\346\227\245\346\266\210\350\264\271\346\203\205\345\206\265", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ManagerForm", "\345\275\223\346\234\210\346\266\210\350\264\271\346\203\205\345\206\265", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("ManagerForm", "\346\214\211\350\264\246\345\215\225\346\237\245\350\257\242", nullptr));

        pushButton_5->setText(QCoreApplication::translate("ManagerForm", "\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("ManagerForm", "\346\200\273\350\256\241\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ManagerForm", "\350\264\246\345\215\225", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ManagerForm", "\346\267\273\345\212\240", nullptr));
        pushButton_7->setText(QCoreApplication::translate("ManagerForm", "\345\210\240\351\231\244", nullptr));
        pushButton_8->setText(QCoreApplication::translate("ManagerForm", "\344\270\213\346\236\266", nullptr));
        pushButton_9->setText(QCoreApplication::translate("ManagerForm", "\344\270\212\346\236\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("ManagerForm", "\350\217\234\350\260\261\347\256\241\347\220\206", nullptr));
        pushButton_10->setText(QCoreApplication::translate("ManagerForm", "\347\273\223\350\264\246", nullptr));
        pushButton_11->setText(QCoreApplication::translate("ManagerForm", "\345\275\223\345\211\215\350\256\242\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagerForm: public Ui_ManagerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERFORM_H
