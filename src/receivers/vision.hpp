#ifndef VISION_H
#define VISION_H

#include <QCoreApplication>
#include <QUdpSocket>
#include <QHostAddress>
#include "../protobuf/ssl_vision_wrapper.pb.h"
#include "../protobuf/ssl_vision_detection.pb.h"
#include "robotstate.hpp"


class Vision : public QObject
{
    Q_OBJECT  // Add this macro to enable Qt's signal/slot mechanism
public:
    Vision(const QString &multicastAddress, int port, QObject *parent = nullptr);
    void startListen();

signals:
    void robotReceived(int id, int team, QVector2D position, float orientation);  // Signal to notify when packet is received
    void ballReceived(QVector2D position);

private:
    QUdpSocket *m_udpSocket;
    QString m_multicastAddress;
    int m_port;
    void readPendingDatagrams();
    void deserializePacket(const QByteArray &datagram);
};

#endif // VISION_H