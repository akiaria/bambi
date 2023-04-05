#ifndef ARTICLE5_H
#define ARTICLE5_H

#include <QDialog>

namespace Ui {
class article5;
}

class article5 : public QDialog
{
    Q_OBJECT

public:
    explicit article5(QWidget *parent = nullptr);
    ~article5();

private:
    Ui::article5 *ui;
};

#endif // ARTICLE5_H
