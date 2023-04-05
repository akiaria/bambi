#include "article1.h"
#include "ui_article1.h"

article1::article1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::article1)
{
    ui->setupUi(this);
}

article1::~article1()
{
    delete ui;
}
