#pragma once

#include <QObject>

class ScoreModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int score READ score CONSTANT)

public:
    explicit ScoreModel(QObject *parent = nullptr);
    int score();

private:
    int m_score;
};
