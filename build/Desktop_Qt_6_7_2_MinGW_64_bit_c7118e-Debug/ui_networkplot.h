/********************************************************************************
** Form generated from reading UI file 'networkplot.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKPLOT_H
#define UI_NETWORKPLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_networkplot
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QCustomPlot *customplot;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *networkplot)
    {
        if (networkplot->objectName().isEmpty())
            networkplot->setObjectName("networkplot");
        networkplot->resize(756, 435);
        centralwidget = new QWidget(networkplot);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 281, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        label->setFont(font);
        customplot = new QCustomPlot(centralwidget);
        customplot->setObjectName("customplot");
        customplot->setGeometry(QRect(10, 60, 731, 321));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 10, 271, 31));
        label_2->setFont(font);
        networkplot->setCentralWidget(centralwidget);
        menubar = new QMenuBar(networkplot);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 756, 22));
        networkplot->setMenuBar(menubar);
        statusbar = new QStatusBar(networkplot);
        statusbar->setObjectName("statusbar");
        networkplot->setStatusBar(statusbar);

        retranslateUi(networkplot);

        QMetaObject::connectSlotsByName(networkplot);
    } // setupUi

    void retranslateUi(QMainWindow *networkplot)
    {
        networkplot->setWindowTitle(QCoreApplication::translate("networkplot", "networkplot", nullptr));
        label->setText(QCoreApplication::translate("networkplot", "Inform\303\241tica Industrial :: TP Final", nullptr));
        label_2->setText(QCoreApplication::translate("networkplot", "Alumno: Calveiro, Miguel Angel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class networkplot: public Ui_networkplot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKPLOT_H
