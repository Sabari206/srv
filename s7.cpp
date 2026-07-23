#include <iostream>
#include <string>
using namespace std;

class Assignment {
private:
    string studentName;
    string assignmentTitle;
    bool submitted;

public:
    void getData() {
        cout << "Enter Student Name: ";
        cin >> studentName;

        cout << "Enter Assignment Title: ";
        cin >> assignmentTitle;

        submitted = false;
    }

    void submit() {
        submitted = true;
    }

    void displayStatus() {
        cout << "\nStudent Name: " << studentName << endl;
        cout << "Assignment Title: " << assignmentTitle << endl;

        if (submitted)
            cout << "Status: Submitted" << endl;
        else
            cout << "Status: Not Submitted" << endl;
    }

    void checkLateSubmission() {
        if (submitted)
            cout << "Assignment submitted on time." << endl;
        else
            cout << "Late Submission!" << endl;
    }
};

int main() {
    Assignment a;

    a.getData();

    cout << "\nSubmitting Assignment...\n";
    a.submit();

    a.displayStatus();
    a.checkLateSubmission();

    return 0;
}
