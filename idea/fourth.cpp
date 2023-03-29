#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//      void             about
//      void             about Qt - 2 arguments
//      Standard Button  critical
//      Standard Button  infromation
//      Standard Button  question
//      Standard Button  warning
   QMessageBox::StandardButton reply;
   reply = QMessageBox::question(this, "My Title","This is my custom message",
                        QMessageBox::Yes | QMessageBox::No);
   if(reply == QMessageBox::Yes) {
       QApplication::quit();
   } else {
        qDebug() << "No is clicked";
   }
}

