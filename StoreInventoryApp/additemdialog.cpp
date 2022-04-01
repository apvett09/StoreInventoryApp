#include "additemdialog.h"
#include "ui_additemdialog.h"

#include <QDir>
#include <QFileDialog>
#include <QMessageBox>

AddItemDialog::AddItemDialog(Item*& newItem, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItemDialog)
{
    ui->setupUi(this);

    this->newItem = &newItem;
    imageFilePath = "none.png"; // default

    //registering the events
    connect(ui->btnConfirmAdd, &QPushButton::clicked,
            this, &AddItemDialog::confirmAdd);

    connect(ui->btnLoadImage, &QPushButton::clicked,
            this, &AddItemDialog::loadItemImage);

    QDir pathDir("./images");
    if(!pathDir.exists())
    {
        //create it
        QDir().mkdir("./images");
    }
}

AddItemDialog::~AddItemDialog()
{
    delete ui;
}

void AddItemDialog::confirmAdd()
{
    // sets the user entered desired product name to variable productName
    QString productName = ui->txtProductName->text();
    // sets the user specified quantity from the spinbox to variable quantity
    int quantity = ui->sbQuantity->value();

    // if valid name and quantity
    if(productName.trimmed() != "" && quantity >= 1)
    {
        // create a new item and initialize(imageFilePath will be default, and later handled by function loadItemImage
        *newItem = new Item(productName, quantity, imageFilePath);
        this->close();
    }
    else
    {
        QMessageBox mb;
        mb.setText("You must have a valid name and a quantity of at least 1");
        mb.exec();
    }

}// end confirmAdd

void AddItemDialog::loadItemImage()
{
    QString filename;

    filename = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image Files (*.png *.jpg)");

    if(filename != "")
    {
        int lastSlash = filename.lastIndexOf("/");

        QString shortName = filename.right(filename.size() - lastSlash - 1);

        QFile::copy(filename, "./images/" + shortName);

        // load the actual image
        QPixmap pixmap("./images/" + shortName);

        ui->lblImage->setPixmap(pixmap);
        // scales the image to fit inside the label in the ui
        ui->lblImage->setScaledContents(true);

        imageFilePath = "./images/" + shortName;
    }

}// end loadItemImage













