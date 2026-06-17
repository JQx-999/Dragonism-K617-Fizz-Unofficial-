import QtQuick
import QtQuick.Controls 2
import QtQuick.Controls.Material
import Dragonism

Item {
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
    Row {
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.margins: 25
        spacing: 10
        Button {
            text: "About"
            ToolTip.visible: hovered
            ToolTip.text: " About "
            ToolTip.delay: 100
            onClicked: {
                stackView.push("about.qml")
            }
        }
        Button {
                Image {

                    source: "assets/images/application-exit-symbolic.svg"
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.verticalCenter: parent.verticalCenter
                }
                ToolTip.visible: hovered
                ToolTip.text: " Exit "
                ToolTip.delay: 100

                Material.background: Material.Pink


                font.family: jbm.font
                onClicked: Qt.quit()
        }
    }
    Text {
            text: "Dragonism K617 Fizz"
            color: "#ED9285"
            anchors.left: parent.left
            anchors.top: parent.top
            font.pixelSize: 35
            font.family: jbm.font
            anchors.margins: 30
    }
    Rectangle {
        width: 620
        height: 280
        radius: 20

        anchors.centerIn: parent
        color: "#1F1F1F"

        Column {
            anchors.centerIn: parent
            spacing: 15
            Row {
                spacing: 190

                Text {
                    color: "#ffffff"
                    text: "RGB Preset:"
                    font.pixelSize: 24
                    font.family: jbm.font
                }
                ComboBox {
                    id:rgb_preset
                    font.family: jbm.font
                    width: 230
                    model: ["OFF", "FIXED ON", "RESPIRE", "RAINBOW", "FLASH AWAY", "RAIN DROPS", "RAINBOW WHEEL", "RIPPLES SHINING", "STARS TWINKLE", "SHADOW DISAPPEAR", "RETRO SNAKE", "NEON STREAM", "REACTION", "SINE WAVE", "RETINUE SCANNING", "ROTATING WINDMILL", "COLORFUL WATERFALL", "BLOSSOMING", "ROTATING STORM", "COLLISION", "PERFECT", "SELF DEFINE"]

                }
            }
            Row {
                spacing: 160
                Text {
                    color: "#ffffff"
                    font.family: jbm.font
                    text: "Brightness: "
                    font.pixelSize: 25
                }
                Row {
                    spacing: 20
                    Slider {
                        id: brightness
                        from: 0
                        to: 4
                        font.family: jbm.font
                        value: 3
                        stepSize: 1


                    }
                    Text {
                        color: "#ffffff"
                        font.family: jbm.font
                        text: brightness.value
                        font.pixelSize: 25
                    }
                }
            }
            Row {
                spacing: 100
                Text {
                    color: "#ffffff"
                    text: "Speed:          "

                    font.family: jbm.font
                    font.pixelSize: 25
                }
                Row {
                    spacing: 20
                    Slider {
                        id: speed
                        from: 1
                        to: 5
                        font.family: jbm.font
                        value: 2
                        stepSize: 1

                    }
                    Text {
                        color: "#ffffff"
                        text: speed.value
                        font.family: jbm.font
                        font.pixelSize: 25
                    }
                }
            }
        }
    }
        Column {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 10

            Button {
                text: "Apply"
                width: 150
                font.family: jbm.font
                onClicked: {
                    dragon.call(rgb_preset.currentIndex, speed.value - 1, brightness.value)
                }
                anchors.horizontalCenter: parent.horizontalCenter
                Material.background: Material.Green
            }
            Text {
                id: status
                text: "Ready!"
                font.pixelSize: 15
                color: "#ffffff"
                font.family: jbm.font
                anchors.horizontalCenter: parent.horizontalCenter


            }
        }


    Connections {
        target: dragon
        function onScriptSuccess() { status.text = "Applied!" }
        function onScriptError() { status.text = "Failed! Possibly run as sudo/admin!"}
    }
}
