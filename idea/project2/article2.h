#ifndef ARTICLE2_H
#define ARTICLE2_H

#include <QDialog>

namespace Ui {
class article2;
}

class article2 : public QDialog
{
    Q_OBJECT

public:
    explicit article2(QWidget *parent = nullptr);
    ~article2();

private:
    Ui::article2 *ui;
};

#endif // ARTICLE2_H
