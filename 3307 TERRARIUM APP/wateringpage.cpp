#include "wateringpage.h"
#include "ui_wateringpage.h"

WateringPage::WateringPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WateringPage)
{
    ui->setupUi(this);
}

WateringPage::~WateringPage()
{
    delete ui;
}
