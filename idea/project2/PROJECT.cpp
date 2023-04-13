#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/User/Desktop/Presentations/qt_pic2/pets.jpg");
    ui->label_background->setPixmap(pix.scaled(1000,700,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    dialog = new Dialog(this);
    dialog->show();
}


void MainWindow::on_Article_1_clicked()
{
    hide();
    article_1 = new article1(this);
    article_1->show();
}


void MainWindow::on_Article_2_clicked()
{
    hide();
    article_2 = new article2(this);
    article_2->show();
}


void MainWindow::on_Article_3_clicked()
{
    hide();
    article_3 = new article3(this);
    article_3->show();
}


void MainWindow::on_Article_4_clicked()
{
    hide();
    article_4 = new article4(this);
    article_4->show();
}

void MainWindow::on_Article_5_clicked()
{
    hide();
    article_5 = new article5(this);
    article_5->show();
}


void MainWindow::on_Article_6_clicked()
{
    hide();
    article_6 = new article6(this);
    article_6->show();
}

