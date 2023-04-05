#include "article3.h"
#include "ui_article3.h"

article3::article3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::article3)
{
    ui->setupUi(this);
}

article3::~article3()
{
    delete ui;
}
