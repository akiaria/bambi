#ifndef ARTICLE3_H
#define ARTICLE3_H

#include <QDialog>

namespace Ui {
class article3;
}

class article3 : public QDialog
{
    Q_OBJECT

public:
    explicit article3(QWidget *parent = nullptr);
    ~article3();

private:
    Ui::article3 *ui;
};

#endif // ARTICLE3_H
