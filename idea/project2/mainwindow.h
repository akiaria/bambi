#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "article.h"

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
    Article *article_1 = new Article("https://www.petbarn.com.au/petspot/fish/care-and-maintenance-fish/fish-first-aid-care-sick-fish/");
    Article *article_2;
    Article *article_3;
    Article *article_4;
    Article *article_5;
    Article *article_6;
};
#endif // MAINWINDOW_H
