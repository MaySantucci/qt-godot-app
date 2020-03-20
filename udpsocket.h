#ifndef UDPSOCKET_H
#define UDPSOCKET_H
#include <QUdpSocket>

class UdpSocket : public QUdpSocket {
    Q_OBJECT
public:
    Q_INVOKABLE void initSocket();
    void readPendingDatagrams();
private:
    QUdpSocket *m_udpSocket;
};


#endif // UDPSOCKET_H
