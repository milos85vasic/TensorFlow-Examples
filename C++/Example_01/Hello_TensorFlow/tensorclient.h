#ifndef TENSORCLIENT_H
#define TENSORCLIENT_H

#include <QObject>

class TensorClient : public QObject {
  Q_OBJECT

public:
  explicit TensorClient(QObject *parent = nullptr);

  Q_INVOKABLE void tryTensorFlow();

signals:

public slots:
};

#endif // TENSORCLIENT_H
