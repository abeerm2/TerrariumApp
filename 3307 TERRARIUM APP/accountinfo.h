#ifndef ACCOUNTINFO_H
#define ACCOUNTINFO_H

#include <QMainWindow>

namespace Ui {
class AccountInfo;
}

class AccountInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit AccountInfo(QWidget *parent = nullptr);
    ~AccountInfo();

private:
    Ui::AccountInfo *ui;
};

#endif // ACCOUNTINFO_H
