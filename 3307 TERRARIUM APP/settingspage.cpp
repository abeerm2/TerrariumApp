#include "settingspage.h"
#include "ui_settingspage.h"

SettingsPage::SettingsPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SettingsPage)
{
    ui->setupUi(this);
}

SettingsPage::~SettingsPage()
{
    delete ui;
}
