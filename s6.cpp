#include <iostream>
#include <string>
using namespace std;

class QuizScoreTracker {
private:
    string studentName;
    int score;

public:
    void getData() {
        cout << "Enter Student Name: ";
        cin >> studentName;

        cout << "Enter Score: ";
        cin >> score;
    }

    void addMarks() {
        int marks;
        cout << "Enter Marks to Add: ";
        cin >> marks;

        score = score + marks;
        if (score > 100)
            score = 100;
    }

    void displayGrade() {
        cout << "\nStudent Name: " << studentName << endl;
        cout << "Score: " << score << endl;

        if (score >= 90)
            cout << "Grade: A" << endl;
        else if (score >= 75)
            cout << "Grade: B" << endl;
        else if (score >= 60)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: Needs Improvement" << endl;
    }
};

int main() {
    QuizScoreTracker q;

    q.getData();
    q.addMarks();
    q.displayGrade();

    return 0;
}
