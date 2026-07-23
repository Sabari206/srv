
#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string brand;
    int ram;
    int battery;

public:
    void getData() {
        cout << "Enter Brand: ";
        cin >> brand;
        cout << "Enter RAM (GB): ";
        cin >> ram;
        cout << "Enter Battery (%): ";
        cin >> battery;
    }

    void runProgram() {
        battery = battery - 20;
        if (battery < 0)
            battery = 0;
    }

    void charge() {
        battery = 100;
    }

    void displayStatus() {
        cout << "\nLaptop Brand: " << brand << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Battery: " << battery << "%" << endl;
    }
};

int main() {
    Laptop l;

    l.getData();

    cout << "\nRunning Program...\n";
    l.runProgram();
    l.displayStatus();

    cout << "\nCharging Laptop...\n";
    l.charge();
    l.displayStatus();

    return 0;
}
