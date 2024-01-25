#ifndef HUMIDITYPAGE_H
#define HUMIDITYPAGE_H

#include <QMainWindow>

namespace Ui {
class HumidityPage;
}

class HumidityPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit HumidityPage(QWidget *parent = nullptr);
    ~HumidityPage();

private:
    Ui::HumidityPage *ui;


};

#endif // HUMIDITYPAGE_H
