#include <QDebug>
#include <QObject>

#include "tensorclient.h"

//#import <tensorflow/core/public/session.h>

TensorClient::TensorClient(QObject *parent) : QObject(parent) {}

void TensorClient::tryTensorFlow() { qDebug() << "Trying TensorFlow."; }
