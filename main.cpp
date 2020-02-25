#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QProcess>

#include "gameprocess.h"
#include "scoremodel.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    qmlRegisterType<ScoreModel>("MyModel", 1, 0, "ScoreModel");

    qmlRegisterType<GameProcess>("GameProcess", 1, 0, "GameProcess");
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);

    engine.load(url);

    return app.exec();
}
