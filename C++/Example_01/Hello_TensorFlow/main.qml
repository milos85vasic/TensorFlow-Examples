import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 1.4

Window {
    visible: true
    width: 500
    height: 500

    Image {
        id: image
        y: 30
        width: 400
        height: 400
        source: "resources/tensor_flow.jpg"
        anchors.horizontalCenter: parent.horizontalCenter
    }

    Button {
        height: 40
        width: 400
        anchors.top: image.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        text: "Fire up TensorFlow"

        onClicked: {
            // TODO: Trigger TensorFlow.
            console.log("Triggering TensorFlow.")

        }
    }
}
