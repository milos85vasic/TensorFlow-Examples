#include <QDebug>
#include <QObject>
// #include <tensorflow::ClientSession>

#include "tensorclient.h"


TensorClient::TensorClient(QObject *parent) : QObject(parent) {}

void TensorClient::tryTensorFlow() { qDebug() << "Trying TensorFlow."; }
