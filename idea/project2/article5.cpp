#include "article5.h"
#include "ui_article5.h"

article5::article5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::article5)
{
    ui->setupUi(this);
}

article5::~article5()
{
    delete ui;
}
