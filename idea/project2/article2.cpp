#include "article2.h"
#include "ui_article2.h"

article2::article2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::article2)
{
    ui->setupUi(this);
}

article2::~article2()
{
    delete ui;
}
