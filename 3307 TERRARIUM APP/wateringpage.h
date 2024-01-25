#ifndef WATERINGPAGE_H
#define WATERINGPAGE_H

#include <QMainWindow>

namespace Ui {
class WateringPage;
}

class WateringPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit WateringPage(QWidget *parent = nullptr);
    ~WateringPage();

private:
    Ui::WateringPage *ui;
};

#endif // WATERINGPAGE_H
