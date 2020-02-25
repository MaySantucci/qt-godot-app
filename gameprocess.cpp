#include "gameprocess.h"
#include <QDebug>

GameProcess::GameProcess(QObject *parent)
{
    m_process = new QProcess();
}

GameProcess::~GameProcess()
{
    m_process->deleteLater();
}
void GameProcess::startGame()
{
    auto res = m_process->startDetached("my_counter.exe");
    qDebug() << "Process start correctly: " << res;
}
