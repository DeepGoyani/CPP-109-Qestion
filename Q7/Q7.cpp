#include <iostream>
#include <string>
using namespace std;

void trafficLightAction(string lightColor) {
    if (lightColor == "red") {
        cout << "Stop" << endl;
    } else if (lightColor == "yellow") {
        cout << "Slow down" << endl;
    } else if (lightColor == "green") {
        cout << "Go" << endl;
    } else {
        cout << "Invalid color" << endl;
    }
}

int main() {
    string lightColor;
    cout << "Enter the current light color (red, yellow, green): ";
    cin >> lightColor;

    trafficLightAction(lightColor);

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

void trafficLightAction(string lightColor) {
    switch (lightColor[0]) {
        case 'r':
            if (lightColor == "red") {
                cout << "Stop" << endl;
            } else {
                cout << "Invalid color" << endl;
            }
            break;
        case 'y':
            if (lightColor == "yellow") {
                cout << "Slow down" << endl;
            } else {
                cout << "Invalid color" << endl;
            }
            break;
        case 'g':
            if (lightColor == "green") {
                cout << "Go" << endl;
            } else {
                cout << "Invalid color" << endl;
            }
            break;
        default:
            cout << "Invalid color" << endl;
    }
}

int main() {
    string lightColor;
    cout << "Enter the current light color (red, yellow, green): ";
    cin >> lightColor;

    trafficLightAction(lightColor);

    return 0;
}

