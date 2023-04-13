#include "article.h"
#include "ui_article.h"

Article::Article(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Article)
{
    ui->setupUi(this);
}

Article::~Article()
{
    delete ui;
}
