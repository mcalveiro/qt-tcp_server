#include "networkplot.h"
#include "ui_networkplot.h"

networkplot::networkplot(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::networkplot)

{

    ui->setupUi(this);

    // Agregar una gráfica al customPlot
    ui->customplot->addGraph();

    // Configurar el estilo de los puntos y la línea de la gráfica
    ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 5));
    ui->customplot->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->customplot->graph(0)->setPen(QPen(Qt::blue)); // Cambiar el color de la línea

    // Configurar los nombres de los ejes en negrita y fuente Arial
    QFont labelFont("Arial", 10, QFont::Bold);
    ui->customplot->xAxis->setLabel("Muestras");
    ui->customplot->xAxis->setLabelFont(labelFont);
    ui->customplot->yAxis->setLabel("Temperaturas");
    ui->customplot->yAxis->setLabelFont(labelFont);

    // Configurar el rango de los ejes
    ui->customplot->xAxis->setRange(-200, 200);
    ui->customplot->yAxis->setRange(-1000, 1000);

    // Personalizar los ejes
    ui->customplot->xAxis->setTickLabelRotation(0);
    ui->customplot->xAxis->setSubTicks(false);
    ui->customplot->xAxis->setTickLength(0, 4);
    ui->customplot->xAxis->grid()->setVisible(true);
    ui->customplot->yAxis->grid()->setVisible(true);

    // Agregar una leyenda
    ui->customplot->legend->setVisible(true);
    ui->customplot->graph(0)->setName("Datos de ejemplo");

    // Agregar un título al gráfico
    QCPTextElement *title = new QCPTextElement(ui->customplot, "Recepción Datos", QFont("arial", 12, QFont::Bold));
    ui->customplot->plotLayout()->insertRow(0);
    ui->customplot->plotLayout()->addElement(0, 0, title);

    // Configurar las interacciones del gráfico
    ui->customplot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    // Datos de ejemplo para la gráfica
    QVector<double> x = {1, 2, 3.4, 5}, y = {4, 6, 8, 2, 5};

    // Asignar los datos a la gráfica y ajustar los ejes
    ui->customplot->graph(0)->setData(x, y);
    ui->customplot->rescaleAxes();
    ui->customplot->replot();
    ui->customplot->update();

}

networkplot::~networkplot()
{
    delete ui;
}
