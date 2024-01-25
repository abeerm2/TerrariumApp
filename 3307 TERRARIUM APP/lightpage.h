#ifndef LIGHTPAGE_H
#define LIGHTPAGE_H

#include <QMainWindow>

namespace Ui {
class LightPage;
}

class LightPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit LightPage(QWidget *parent = nullptr);
    ~LightPage();

private slots:
    void on_dial_valueChanged(int value);
    
private:
    Ui::LightPage *ui;
};

#endif // LIGHTPAGE_H
