#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>

namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

private slots:
    void on_pushButton_Settings_clicked();

    void on_pushButton_Temp_clicked();

    void on_pushButton_Light_clicked();

    void on_pushButton_Humidity_clicked();

    void on_pushButton_Watering_clicked();

    void on_pushButton_AI_clicked();


private:
    Ui::MainPage *ui;
};

#endif // MAINPAGE_H
