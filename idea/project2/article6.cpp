#include "article6.h"
#include "ui_article6.h"

article6::article6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::article6)
{
    ui->setupUi(this);
}

article6::~article6()
{
    delete ui;
}
