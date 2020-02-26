import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 2.14

import MyModel 1.0
import Game 1.0

Window {
    visible: true
    width: 400
    height: 760
    title: qsTr("Hello World")

    Button {
        anchors.centerIn: parent
        text: qsTr("start")
        onClicked: GameProcess.start()
    }
}
