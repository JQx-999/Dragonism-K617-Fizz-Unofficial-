#pragma once
#include <QObject>
#include <QThread>

extern "C" {
    #include "dragonism_handler.h"
}

class DragonismWorker : public QObject {
    Q_OBJECT
    public slots:
        void run(int m, int s, int b) {
            emit scriptStarted();
            int result = dragonism(m, s, b);
            if (result == 0)    emit scriptSuccess();
            else                emit scriptError();
        }
    signals:
        void scriptStarted();
        void scriptSuccess();
        void scriptError();
};

class DragonismBridge : public QObject {
    Q_OBJECT
    public:
        explicit DragonismBridge(QObject *parent = nullptr) : QObject(parent) {
            worker = new DragonismWorker();
            worker->moveToThread(&thread);
            connect(this, &DragonismBridge::triggerWorker, worker, &DragonismWorker::run);
            connect(worker,     &DragonismWorker::scriptSuccess,    this,   &DragonismBridge::scriptSuccess);
            connect(worker,     &DragonismWorker::scriptError,      this,   &DragonismBridge::scriptError);
            connect(worker,     &DragonismWorker::scriptStarted,    this,   &DragonismBridge::scriptStarted);

            connect(&thread, &QThread::finished, worker, &QObject::deleteLater);
            thread.start();

        }

        ~DragonismBridge() {
            thread.quit();
            thread.wait();
        }
        Q_INVOKABLE void startScript(int m, int s, int b) {
            emit triggerWorker(m, s, b);
        }
        signals:
            void scriptStarted();
            void scriptSuccess();
            void scriptError();
            void triggerWorker(int m, int s, int b);
        private:
            DragonismWorker *worker;
            QThread thread;
};