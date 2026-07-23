


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int energy;

public:
    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Energy Level (0-100): ";
        cin >> energy;
    }

    void attendClass() {
        energy = energy - 20;
        if (energy < 0)
            energy = 0;
    }

    void drinkCoffee() {
        energy = energy + 25;
        if (energy > 100)
            energy = 100;
    }

    void sleep() {
        energy = 100;
    }

    void displayStatus() {
        cout << "\nName: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Energy Level: " << energy << endl;
    }

    bool survives() {
        return energy > 0;
    }
};

int main() {
    Student s;

    s.getData();

    cout << "\nAttending 3 classes...\n";
    s.attendClass();
    s.attendClass();
    s.attendClass();

    s.displayStatus();

    if (s.survives())
        cout << "The student survives three classes without sleeping!" << endl;
    else
        cout << "The student falls asleep!" << endl;

    return 0;
}

