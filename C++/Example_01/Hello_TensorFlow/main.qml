import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4

import TensorClient 1.0


Window {
    visible: true
    width: 500
    height: 550

    TensorClient{
        id: tensorClient
    }

    Image {
        id: image
        y: 30
        width: parent.window * 0.6
        height: parent.window * 0.6
        source: "resources/tensor_flow.jpg"
        anchors.horizontalCenter: parent.horizontalCenter
    }

    Button {
        y: image.y + image.height + 30
        id: btn
        height: 40
        width: parent.width * 0.8
        anchors.horizontalCenter: parent.horizontalCenter
        text: "Fire up TensorFlow"

        style: ButtonStyle {
            label : Text {
                color: "white"
                text: btn.text
                horizontalAlignment: Text.Text.AlignHCenter
                anchors.horizontalCenter: parent.horizontalCenter
            }

            background: Rectangle {
                radius: 5
                color:  btn.pressed ? "#ffc000" : "#ff8400"
            }

            padding {
                top: 8
                left: 0
                right: 0
                bottom: 8
            }
        }

        onClicked: {
            tensorClient.tryTensorFlow()
        }
    }
}
