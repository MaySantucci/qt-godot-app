#pragma once

#include <QObject>
#include <QProcess>

class GameProcess : public QObject
{
    Q_OBJECT

public:
    explicit GameProcess(QObject *parent = nullptr);
    ~GameProcess();
    Q_INVOKABLE void start();

private:
    QProcess *m_process;
};
