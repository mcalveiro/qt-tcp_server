#ifndef NETWORKPLOT_H
#define NETWORKPLOT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class networkplot;
}
QT_END_NAMESPACE

class networkplot : public QMainWindow
{
    Q_OBJECT

public:
    networkplot(QWidget *parent = nullptr);
    ~networkplot();

private:
    Ui::networkplot *ui;
};
#endif // NETWORKPLOT_H
