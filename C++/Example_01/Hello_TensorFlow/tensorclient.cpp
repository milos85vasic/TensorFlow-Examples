#include <QDebug>
#include <QObject>

#include <tensorflow/core/platform/env.h>
#include <tensorflow/core/public/session.h>
// #include <tensorflow/tensorflow/core/lib/core/errors.h>

#include "tensorclient.h"



TensorClient::TensorClient(QObject *parent) : QObject(parent) {}

void TensorClient::tryTensorFlow() { qDebug() << "Trying TensorFlow."; }
