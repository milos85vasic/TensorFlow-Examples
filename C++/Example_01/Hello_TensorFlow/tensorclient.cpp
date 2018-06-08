#include <QDebug>
#include <QObject>

#include <tensorflow/cc/framework/ops.h>
#include <tensorflow/cc/client/client_session.h>
#include <tensorflow/core/framework/tensor.h>

#include "tensorclient.h"

TensorClient::TensorClient(QObject *parent) : QObject(parent) {}

void TensorClient::tryTensorFlow() { qDebug() << "Trying TensorFlow."; }
