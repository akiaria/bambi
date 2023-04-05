#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QPixmap>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/User/Desktop/Presentations/qt_pic2/pets.jpg");
    ui->label_background->setPixmap(pix.scaled(1000,700,Qt::KeepAspectRatio));
}

Dialog::~Dialog()
{
    delete ui;
}
