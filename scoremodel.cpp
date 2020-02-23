#include "scoremodel.h"

#include <QCoreApplication>
#include <QDebug>
#include <QFile>

ScoreModel::ScoreModel(QObject *parent)
{
    m_score = 0;

    auto path = QCoreApplication::applicationDirPath().append("/session_data.json");
    qDebug() << "path" << path;
    qDebug() << "exist file" << QFile::exists(path);

    if (QFile::exists(path)) {
        QFile file(path);
        if (file.open(QIODevice::ReadOnly)) {
            qDebug() << "file opened correctly";
            auto data = file.readAll();
            qDebug() << "data" << data;
        } else {
            qDebug() << "error reading file";
        }
    }
}

int ScoreModel::score()
{
    return m_score;
}
