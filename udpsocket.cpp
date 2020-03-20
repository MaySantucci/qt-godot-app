#include "udpsocket.h"

#include <QNetworkDatagram>
#include <QDebug>

void UdpSocket::initSocket() {
    m_udpSocket = new QUdpSocket();
    auto res = m_udpSocket->bind(QHostAddress::LocalHost, 7755);

    qDebug() << "bind connection result" << res;

    connect(m_udpSocket, &QUdpSocket::readyRead,
            this, &UdpSocket::readPendingDatagrams);

}

void UdpSocket::readPendingDatagrams(){
    while(m_udpSocket->hasPendingDatagrams()){
        QNetworkDatagram datagram = m_udpSocket->receiveDatagram();
        qDebug() << "datagram" << datagram.data();
    }
}
