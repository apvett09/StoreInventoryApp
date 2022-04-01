/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *menNewProduct;
    QAction *menuEditSelectedProduct;
    QAction *menuSaveProducts;
    QAction *menuLoadProducts;
    QAction *menuExit;
    QWidget *centralwidget;
    QListWidget *lstProducts;
    QLabel *label;
    QLabel *label_2;
    QLabel *lblProductName;
    QLabel *lblQuantity;
    QLabel *lblImage;
    QPushButton *btnRemove;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        menNewProduct = new QAction(MainWindow);
        menNewProduct->setObjectName(QString::fromUtf8("menNewProduct"));
        menuEditSelectedProduct = new QAction(MainWindow);
        menuEditSelectedProduct->setObjectName(QString::fromUtf8("menuEditSelectedProduct"));
        menuSaveProducts = new QAction(MainWindow);
        menuSaveProducts->setObjectName(QString::fromUtf8("menuSaveProducts"));
        menuLoadProducts = new QAction(MainWindow);
        menuLoadProducts->setObjectName(QString::fromUtf8("menuLoadProducts"));
        menuExit = new QAction(MainWindow);
        menuExit->setObjectName(QString::fromUtf8("menuExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lstProducts = new QListWidget(centralwidget);
        lstProducts->setObjectName(QString::fromUtf8("lstProducts"));
        lstProducts->setGeometry(QRect(20, 10, 281, 411));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 30, 131, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 100, 71, 21));
        label_2->setFont(font);
        lblProductName = new QLabel(centralwidget);
        lblProductName->setObjectName(QString::fromUtf8("lblProductName"));
        lblProductName->setGeometry(QRect(470, 30, 161, 31));
        lblProductName->setFont(font);
        lblProductName->setFrameShape(QFrame::Panel);
        lblQuantity = new QLabel(centralwidget);
        lblQuantity->setObjectName(QString::fromUtf8("lblQuantity"));
        lblQuantity->setGeometry(QRect(470, 100, 161, 31));
        lblQuantity->setFont(font);
        lblQuantity->setFrameShape(QFrame::Panel);
        lblImage = new QLabel(centralwidget);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(430, 160, 250, 250));
        lblImage->setFont(font);
        lblImage->setFrameShape(QFrame::Panel);
        btnRemove = new QPushButton(centralwidget);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        btnRemove->setGeometry(QRect(20, 440, 281, 31));
        btnRemove->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(menNewProduct);
        menuFile->addAction(menuEditSelectedProduct);
        menuFile->addSeparator();
        menuFile->addAction(menuSaveProducts);
        menuFile->addAction(menuLoadProducts);
        menuFile->addSeparator();
        menuFile->addAction(menuExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Store Inventory Application", nullptr));
        menNewProduct->setText(QCoreApplication::translate("MainWindow", "New Product", nullptr));
        menuEditSelectedProduct->setText(QCoreApplication::translate("MainWindow", "Edit Selected Product", nullptr));
        menuSaveProducts->setText(QCoreApplication::translate("MainWindow", "Save Products", nullptr));
        menuLoadProducts->setText(QCoreApplication::translate("MainWindow", "Load Products", nullptr));
        menuExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Selected Product:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Quantity:", nullptr));
        lblProductName->setText(QString());
        lblQuantity->setText(QString());
        lblImage->setText(QString());
        btnRemove->setText(QCoreApplication::translate("MainWindow", "Remove Selected Product", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
