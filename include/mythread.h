#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QObject>
#include <QtNetwork>
#include <QTcpServer>
#include <QtDebug>

class MyThread : public QThread
{
    Q_OBJECT
public:
    /*explicit MyThread(QObject *parent = nullptr);*/
    MyThread(qintptr ID, QObject *parent =0 );
    void run();


private:
    QTcpSocket *socket;
    qintptr socketDescriptor;


public slots:
    void readReady();
    void disconnected();

signals:
    void error(QTcpSocket::SocketError);

};




#endif // MYTHREAD_H
