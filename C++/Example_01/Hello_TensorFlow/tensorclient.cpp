#include <QDebug>
#include <QObject>

#include "tensorclient.h"
#include <tensorflow/core/platform/env.h>
#include <tensorflow/core/public/session.h>

using namespace tensorflow;

TensorClient::TensorClient(QObject *parent) : QObject(parent) {}

void TensorClient::tryTensorFlow() {
    Session* session;
    Status status = NewSession(SessionOptions(), &session);
    if (!status.ok()) {
        qDebug() << "Session failed.";
    } else {
        qDebug() << "Session successfully created.\n";
    }
}
