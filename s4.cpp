#include <iostream>
using namespace std;

class PencilBox {
private:
    int pens;
    int pencils;
    int erasers;

public:
    void getData() {
        cout << "Enter number of Pens: ";
        cin >> pens;

        cout << "Enter number of Pencils: ";
        cin >> pencils;

        cout << "Enter number of Erasers: ";
        cin >> erasers;
    }

    void addItem() {
        pens++;
        pencils++;
        erasers++;
    }

    void removeItem() {
        if (pens > 0)
            pens--;
        if (pencils > 0)
            pencils--;
        if (erasers > 0)
            erasers--;
    }

    void displayContents() {
        cout << "\nPencil Box Contents:\n";
        cout << "Pens: " << pens << endl;
        cout << "Pencils: " << pencils << endl;
        cout << "Erasers: " << erasers << endl;
    }
};

int main() {
    PencilBox p;

    p.getData();

    cout << "\nAfter Adding One Item:\n";
    p.addItem();
    p.displayContents();

    cout << "\nAfter Removing One Item:\n";
    p.removeItem();
    p.displayContents();

    return 0;
}

