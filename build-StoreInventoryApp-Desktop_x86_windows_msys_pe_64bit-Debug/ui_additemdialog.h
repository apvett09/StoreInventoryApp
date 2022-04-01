/********************************************************************************
** Form generated from reading UI file 'additemdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMDIALOG_H
#define UI_ADDITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddItemDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtProductName;
    QSpinBox *sbQuantity;
    QLabel *lblImage;
    QPushButton *btnConfirmAdd;
    QPushButton *btnLoadImage;

    void setupUi(QDialog *AddItemDialog)
    {
        if (AddItemDialog->objectName().isEmpty())
            AddItemDialog->setObjectName(QString::fromUtf8("AddItemDialog"));
        AddItemDialog->resize(593, 627);
        label = new QLabel(AddItemDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 50, 111, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(AddItemDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 110, 81, 21));
        label_2->setFont(font);
        label_3 = new QLabel(AddItemDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 180, 101, 21));
        label_3->setFont(font);
        txtProductName = new QLineEdit(AddItemDialog);
        txtProductName->setObjectName(QString::fromUtf8("txtProductName"));
        txtProductName->setGeometry(QRect(240, 50, 191, 31));
        txtProductName->setFont(font);
        sbQuantity = new QSpinBox(AddItemDialog);
        sbQuantity->setObjectName(QString::fromUtf8("sbQuantity"));
        sbQuantity->setGeometry(QRect(240, 110, 191, 31));
        sbQuantity->setFont(font);
        sbQuantity->setMinimum(1);
        sbQuantity->setMaximum(1000);
        lblImage = new QLabel(AddItemDialog);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(240, 190, 250, 250));
        lblImage->setFrameShape(QFrame::Panel);
        btnConfirmAdd = new QPushButton(AddItemDialog);
        btnConfirmAdd->setObjectName(QString::fromUtf8("btnConfirmAdd"));
        btnConfirmAdd->setGeometry(QRect(240, 530, 111, 31));
        btnConfirmAdd->setFont(font);
        btnLoadImage = new QPushButton(AddItemDialog);
        btnLoadImage->setObjectName(QString::fromUtf8("btnLoadImage"));
        btnLoadImage->setGeometry(QRect(69, 210, 131, 31));
        btnLoadImage->setFont(font);

        retranslateUi(AddItemDialog);

        QMetaObject::connectSlotsByName(AddItemDialog);
    } // setupUi

    void retranslateUi(QDialog *AddItemDialog)
    {
        AddItemDialog->setWindowTitle(QCoreApplication::translate("AddItemDialog", "Add Item", nullptr));
        label->setText(QCoreApplication::translate("AddItemDialog", "Product Name:", nullptr));
        label_2->setText(QCoreApplication::translate("AddItemDialog", "Quantity:", nullptr));
        label_3->setText(QCoreApplication::translate("AddItemDialog", "Item Image:", nullptr));
        lblImage->setText(QString());
        btnConfirmAdd->setText(QCoreApplication::translate("AddItemDialog", "Confirm Add", nullptr));
        btnLoadImage->setText(QCoreApplication::translate("AddItemDialog", "Load Item Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItemDialog: public Ui_AddItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMDIALOG_H
