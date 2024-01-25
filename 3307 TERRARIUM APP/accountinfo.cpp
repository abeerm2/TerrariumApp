#include "accountinfo.h"
#include "ui_accountinfo.h"

AccountInfo::AccountInfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AccountInfo)
{
    ui->setupUi(this);
}

AccountInfo::~AccountInfo()
{
    delete ui;
}
