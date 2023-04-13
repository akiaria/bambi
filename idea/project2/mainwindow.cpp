#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QDesktopServices>
#include <QUrl>
#include <QtCore>

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
   // hide();
    // article_1 = new Article(this);
 //   article_1->show();
    QDesktopServices::openUrl(QUrl(this->article_1->url, QUrl::TolerantMode));
}


void MainWindow::on_Article_2_clicked()
{
    hide();
    article_2 = new Article(this);
    article_2->show();
    QDesktopServices::openUrl(QUrl("https://avianenrichment.com/learn/physical-needs/health/emergency-first-aid-basics" , QUrl::TolerantMode));
}


void MainWindow::on_Article_3_clicked()
{
    hide();
    article_3 = new Article(this);
    article_3->show();
}


void MainWindow::on_Article_4_clicked()
{
    hide();
    article_4 = new Article(this);
    article_4->show();
}

void MainWindow::on_Article_5_clicked()
{
    hide();
    article_5 = new Article(this);
    article_5->show();
}


void MainWindow::on_Article_6_clicked()
{
    hide();
    article_6 = new Article(this);
    article_6->show();
}

