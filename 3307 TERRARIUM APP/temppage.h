#ifndef TEMPPAGE_H
#define TEMPPAGE_H

#include <QMainWindow>

namespace Ui {
class TempPage;
}

class TempPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit TempPage(QWidget *parent = nullptr);
    ~TempPage();

private slots:
    void on_dial_valueChanged(int value);

private:
    Ui::TempPage *ui;
};

#endif // TEMPPAGE_H
