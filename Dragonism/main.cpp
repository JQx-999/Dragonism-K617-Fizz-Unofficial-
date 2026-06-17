#include "scripts/dragonism.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <scripts/dragonism_handler.h>
#include <QQmlContext>
#include <QThread>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<DragWrapper>("Dragonism", 1, 0, "DragWrapper");

    QQmlApplicationEngine engine;




    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("Dragonism", "Main");

    return QGuiApplication::exec();
}
