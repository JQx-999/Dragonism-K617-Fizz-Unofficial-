import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material

Item {
    Rectangle {
        width: parent.width
                height: parent.height
                anchors.horizontalCenter: parent.horizontalCenter
                color: "#222226"

    }
    Image {

        source: "assets/images/theme.png"
        width: parent.width *0.4
        height: width
        anchors.bottom: parent.bottom
        anchors.right: parent.right

    }
    Button {
        Image {

            source: "assets/images/application-exit-symbolic.svg"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
        }
        ToolTip.visible: hovered
        ToolTip.text: " Back "
        ToolTip.delay: 100
        anchors.top: parent.top
        anchors.left: parent.left
        Material.background: Material.BlueGrey
        anchors.margins: 25
        onClicked: stackView.pop()
        HoverHandler {
                cursorShape: Qt.PointingHandCursor
            }

    }
    Column {
        spacing: 20
        width: parent.width * 0.9
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset:  -(parent.height * 0.1)
        Text {

            text: "About"
            font.pixelSize: 35
            color: "#ffffff"
        }
        TextEdit {
            width: parent.width * 1
            color: "#ffffff"
            text: "Hi! This app is made by JQx_999. My full name/government name is Saradendu Palei. I made this app just for my own convinence. You may or may not choose to use this application. Enjoy! If you happen to have some errors please mail me at bdservo7@gmail.com. I live in India 🇮🇳. This project follows GNU GPL v3.0 license!"
            wrapMode: TextEdit.Wrap
            selectByMouse: true
            font.pixelSize: 16
        }
    }
}
