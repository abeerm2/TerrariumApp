#include "lightpage.h"
#include "ui_lightpage.h"

LightPage::LightPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LightPage)
{
    ui->setupUi(this);
}

LightPage::~LightPage()
{
    delete ui;
}
void LightPage::on_dial_valueChanged(int value)
{
    ui->label_dial_value->setText(QString::number(value));
}


