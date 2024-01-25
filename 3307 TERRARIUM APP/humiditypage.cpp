#include "humiditypage.h"
#include "ui_humiditypage.h"

HumidityPage::HumidityPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HumidityPage)
{
    ui->setupUi(this);
    // Connect the slider's valueChanged signal to a slot to handle changes
    //connect(ui->horizontalSlider, &QSlider::valueChanged, this, &HumidityPage::handleSliderValueChanged);
}

HumidityPage::~HumidityPage()
{
    delete ui;
}

// Slot to handle changes in the slider value
//void HumidityPage::handleSliderValueChanged(int value)
//{
//    // You can use the 'value' parameter to access the current slider value and perform actions as needed
//    // For example, you can update the text in the QTextEdit based on the slider value
//    ui->label->setPlainText(QString("LEVEL of HUMIDITY\n\nfrom 0% to 100%\n\n%1%").arg(value));
//}
