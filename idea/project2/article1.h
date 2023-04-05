#ifndef ARTICLE1_H
#define ARTICLE1_H

#include <QDialog>

namespace Ui {
class article1;
}

class article1 : public QDialog
{
    Q_OBJECT

public:
    explicit article1(QWidget *parent = nullptr);
    ~article1();

private:
    Ui::article1 *ui;
};

#endif // ARTICLE1_H
