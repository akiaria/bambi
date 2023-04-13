#ifndef ARTICLE_H
#define ARTICLE_H

#include <QDialog>
#include "string.h"

namespace Ui {
class Article;
}

class Article : public QDialog
{
    Q_OBJECT

public:
    explicit Article(QWidget *parent = nullptr);
    Article(string);

    ~Article();
    string url;

private:
    Ui::Article *ui;
};

#endif // ARTICLE_H
