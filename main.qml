import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 2.14

import MyModel 1.0
import GameProcess 1.0

Window {
    visible: true
    width: 400
    height: 760
    title: qsTr("Hello World")

    GameProcess {
        id: game
    }

    Button {
        text: qsTr("start")
        onClicked: game.startGame()
    }
}
