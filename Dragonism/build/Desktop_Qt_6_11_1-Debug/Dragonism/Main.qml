import QtQuick
import QtQuick.Controls 2
import QtQuick.Controls.Material
import Dragonism



Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Dragonism Application")
    Material.theme: Material.Dark
    minimumWidth: 640
    minimumHeight: 480
    DragWrapper {
        id: dragon
        onScriptSuccess: console.log("Success!")
        onScriptError: console.log("Error!")
    }
    Rectangle {
        width: parent.width
                height: parent.height
                anchors.horizontalCenter: parent.horizontalCenter
                color: "#222226"

    }
    FontLoader {
            id: jbm
            source: "fonts/JetBrainsMono-VariableFont_wght.ttf"
    }


    StackView {
        id: stackView
        anchors.fill: parent
        initialItem: MainMenu {}
    }
}
