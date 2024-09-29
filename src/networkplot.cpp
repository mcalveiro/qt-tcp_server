#include "networkplot.h"
#include "ui_networkplot.h"

networkplot::networkplot(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::networkplot)
{
    ui->setupUi(this);
}

networkplot::~networkplot()
{
    delete ui;
}
