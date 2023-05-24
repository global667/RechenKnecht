#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "rechner.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<Rechner>("Rechner", 1, 0, "Rechner");

    const QUrl url(u"qrc:/RechenKnecht/Main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
