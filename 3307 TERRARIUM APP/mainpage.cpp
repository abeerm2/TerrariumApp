#include "mainpage.h"
#include "settingspage.h"
#include "temppage.h"
#include "humiditypage.h"
#include "lightpage.h"
#include "wateringpage.h"
#include "accountinfo.h"
#include "ui_mainpage.h"

MainPage::MainPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
}

MainPage::~MainPage()
{
    delete ui;
}

void MainPage::on_pushButton_Settings_clicked()
{
    SettingsPage *settingspage = new SettingsPage();
    settingspage->show();
}

void MainPage::on_pushButton_Temp_clicked()
{
    TempPage *temppage = new TempPage();
    temppage->show();

}

void MainPage::on_pushButton_Light_clicked()
{
    LightPage *lightpage = new LightPage();
    lightpage->show();


}

void MainPage::on_pushButton_Humidity_clicked()
{
    HumidityPage *humiditypage = new HumidityPage();
    humiditypage->show();

}

void MainPage::on_pushButton_Watering_clicked()
{
    WateringPage *waterpage = new WateringPage();
    waterpage->show();

}

void MainPage::on_pushButton_AI_clicked()
{
    AccountInfo *accountpage = new AccountInfo();
    accountpage->show();

}


