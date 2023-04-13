#include "article4.h"
#include "ui_article4.h"

article4::article4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::article4)
{
    ui->setupUi(this);
}

article4::~article4()
{
    delete ui;
}
