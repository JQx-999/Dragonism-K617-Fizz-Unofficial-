#pragma once

#include <QObject>
#include <QThread>

extern "C" {
#include "dragonism_handler.h"
}

class DragWorker : public QObject{
    Q_OBJECT
public:
    explicit DragWorker(int m, int s, int b, QObject* parent = nullptr) : QObject(parent), m_m(m), m_s(s), m_b(b) {}
public slots:
    void run() {
        int result = dragonism(m_m, m_s, m_b);
        if (result == 0)    emit scriptSuccess();
        else                emit scriptError();
    }
signals:
    void scriptSuccess();
    void scriptError();
private:
    int m_m, m_s, m_b;
};

class DragWrapper : public QObject {
    Q_OBJECT
    Q_PROPERTY(bool running READ isRunning NOTIFY runningChanged)
public:
    explicit DragWrapper(QObject* parent = nullptr) : QObject(parent) {}
    ~DragWrapper() { if (m_thread) { m_thread->quit(); m_thread->wait();}}

    bool isRunning() const { return m_running; }
    Q_INVOKABLE void call(int m, int s, int b) {
        if (m_running) return;
        m_thread = new QThread(this);
        m_worker = new DragWorker(m, s, b);
        m_worker->moveToThread(m_thread);

        connect(m_thread, &QThread::started, m_worker, &DragWorker::run);
        connect(m_worker, &DragWorker::scriptSuccess, this, &DragWrapper::scriptSuccess);
        connect(m_worker, &DragWorker::scriptError, this, &DragWrapper::scriptError);
        connect(m_worker, &DragWorker::scriptSuccess, m_thread, &QThread::quit);
        connect(m_worker, &DragWorker::scriptError, m_thread, &QThread::quit);
        connect(m_thread, &QThread::finished, m_worker, &QObject::deleteLater);
        connect(m_thread, &QThread::finished, m_thread, &QObject::deleteLater);

        m_running = true;
        emit runningChanged();
        m_thread->start();
        connect(m_thread, &QThread::finished, this, [this]() {
            m_running = false;
            m_thread = nullptr;
            m_worker = nullptr;
            emit runningChanged();
        });
    }

signals:
    void scriptSuccess();
    void scriptError();
    void runningChanged();

private:
    QThread* m_thread = nullptr;
    DragWorker* m_worker = nullptr;
    bool m_running = false;
};