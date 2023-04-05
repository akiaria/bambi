#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "article1.h"
#include "article2.h"
#include "article3.h"
#include "article4.h"
#include "article5.h"
#include "article6.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_Article_1_clicked();

    void on_Article_2_clicked();

    void on_Article_3_clicked();

    void on_Article_4_clicked();

    void on_Article_5_clicked();

    void on_Article_6_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *dialog;
    article1 *article_1;
    article2 *article_2;
    article3 *article_3;
    article4 *article_4;
    article5 *article_5;
    article6 *article_6;
};
#endif // MAINWINDOW_H
