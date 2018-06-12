#include <QDebug>
#include <QObject>

#include <tensorflow/cc/client/client_session.h>
#include <tensorflow/cc/framework/ops.h>
#include <tensorflow/core/framework/tensor.h>

#include "tensorclient.h"

// FIXME: .//third_party/eigen3/unsupported/Eigen/CXX11/Tensor !!!

TensorClient::TensorClient(QObject *parent) : QObject(parent) {}

void TensorClient::tryTensorFlow() { qDebug() << "Trying TensorFlow."; }
