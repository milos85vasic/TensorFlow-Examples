#include <QDebug>
#include <QObject>

#include <framework/ops.h>
#include <client/client_session.h>

#include "tensorclient.h"


TensorClient::TensorClient(QObject *parent) : QObject(parent) {}

void TensorClient::tryTensorFlow() { qDebug() << "Trying TensorFlow."; }
