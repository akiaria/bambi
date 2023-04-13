#ifndef ARTICLE4_H
#define ARTICLE4_H

#include <QDialog>

namespace Ui {
class article4;
}

class article4 : public QDialog
{
    Q_OBJECT

public:
    explicit article4(QWidget *parent = nullptr);
    ~article4();

private:
    Ui::article4 *ui;
};

#endif // ARTICLE4_H
