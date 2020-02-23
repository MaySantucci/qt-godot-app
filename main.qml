import QtQuick 2.14
import QtQuick.Window 2.14

import MyModel 1.0

Window {
    visible: true
    width: 1920
    height: 960
    title: qsTr("Hello World")

    ListView {
        anchors.fill: parent

        model: ScoreModel{

        }

        delegate: Text {
            text: score
        }
    }
}
