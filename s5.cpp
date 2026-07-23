#include <iostream>
using namespace std;

class ClassroomLight {
private:
    int roomNumber;
    int brightness;
    string status;

public:
    void getData() {
        cout << "Enter Room Number: ";
        cin >> roomNumber;

        cout << "Enter Brightness (0-100): ";
        cin >> brightness;

        cout << "Enter Status (ON/OFF): ";
        cin >> status;
    }

    void switchOn() {
        status = "ON";
    }

    void switchOff() {
        status = "OFF";
    }

    void increaseBrightness() {
        if (status == "ON") {
            brightness = brightness + 10;
            if (brightness > 100)
                brightness = 100;
        }
    }

    void displayStatus() {
        cout << "\nRoom Number: " << roomNumber << endl;
        cout << "Brightness: " << brightness << "%" << endl;
        cout << "Status: " << status << endl;
    }
};

int main() {
    ClassroomLight light;

    light.getData();

    cout << "\nSwitching ON...\n";
    light.switchOn();
    light.increaseBrightness();
    light.displayStatus();

    cout << "\nSwitching OFF...\n";
    light.switchOff();
    light.displayStatus();

    return 0;
}

