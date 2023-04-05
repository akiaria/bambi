#ifndef ARTICLE6_H
#define ARTICLE6_H

#include <QDialog>

namespace Ui {
class article6;
}

class article6 : public QDialog
{
    Q_OBJECT

public:
    explicit article6(QWidget *parent = nullptr);
    ~article6();

private:
    Ui::article6 *ui;
};

#endif // ARTICLE6_H
