import QtQuick
import QtQuick.Window
import QtQuick.Controls
import Rechner

ApplicationWindow {
    id:  window
    width: 640
    height: 480
    visible: true
    title: qsTr("RechenKnecht")
    //Rectangle {
        //border.color: black
    Rechner {
        id: rechner
    }

Column {
    anchors.fill: parent

    TextField {
        text: rechner.solution
        width: parent.width / 3
        readOnly: true
        visible: true
        horizontalAlignment: "AlignRight"
        anchors.horizontalCenter: parent.horizontalCenter

        //anchors.top: parent
        //anchpr


        }
    Grid {
        anchors.horizontalCenter: parent.horizontalCenter
        width: parent.width / 5 * 4
        //height: window.height / 5 * 4
        columns: 3
        rows: 4
        Button {
            width: parent.width/3
            text: "1"
            onClicked: rechner.getNumber("1")
        }
        Button {
            width: parent.width/3
            text: "2"
            onClicked: rechner.getNumber("2")
        }
        Button {
            width: parent.width/3
            text: "3"
            onClicked: rechner.getNumber("3")
        }
        Button {
            width: parent.width/3
            text: "4"
            onClicked: rechner.getNumber("4")
        }
        Button {
            width: parent.width/3
            text: "5"
            onClicked: rechner.getNumber("5")
        }
        Button {
            width: parent.width/3
            text: "6"
            onClicked: rechner.getNumber("6")
        }
        Button {
            width: parent.width/3
            text: "7"
            onClicked: rechner.getNumber("7")
        }
        Button {
            width: parent.width/3
            text: "8"
            onClicked: rechner.getNumber("8")
        }
        Button {
            width: parent.width/3
            text: "9"
            onClicked: rechner.getNumber("9")
        }
        Button {
            width: parent.width/3
            text: ","
            onClicked: rechner.getNumber(",")
        }
        Button {
            width: parent.width/3
            text: "0"
            onClicked: rechner.getNumber("0")
        }
        Button {
            width: parent.width/3
            text: "DEL"
            onClicked: rechner.getNumber("del")
        }
    }
    Rectangle {
        //anchors.fill: parent
        //height: 50
        color: "#000000"
    }

    Grid {
        anchors.horizontalCenter: parent.horizontalCenter
        width: parent.width / 5 * 4
        //height: window.height / 5 * 4
        columns: 3
        rows: 4
        Button {
            width: parent.width/3
            text: "+"
            onClicked: rechner.getNumber("+")
        }
        Button {
            width: parent.width/3
            text: "-"
            onClicked: rechner.getNumber("-")
        }
        Button {
            width: parent.width/3
            text: "*"
            onClicked: rechner.getNumber("*")
        }
        Button {
            width: parent.width/3
            text: "/"
            onClicked: rechner.getNumber("/")
        }
        Button {
            width: parent.width/3
            text: "sqrt()"
            onClicked: rechner.getNumber("sqrt")
        }
        Button {
            width: parent.width/3
            text: "x^2"
            onClicked: rechner.getNumber("x^2")
        }
        Button {
            width: parent.width/3
            text: "x^3"
            onClicked: rechner.getNumber("x^3")
        }
        Button {
            width: parent.width/3
            text: "PI"
            onClicked: rechner.getNumber("PI")
        }
        Button {
            width: parent.width/3
            text: "m+"
            onClicked: rechner.getNumber("m+")
        }
        Button {
            width: parent.width/3
            text: "m"
            onClicked: rechner.getNumber("m")
        }
        Button {
            width: parent.width/3
            text: "clear"
            onClicked: rechner.getNumber("clr")
        }
        Button {
            width: parent.width/3
            text: "="
            onClicked: rechner.getNumber("=")
        }
    }
}
footer: ToolButton {
    anchors.horizontalCenter:  parent.horizontalCenter
    Label {
        anchors.horizontalCenter:  parent.horizontalCenter
        text: "laberlabel"
    }
}
}
