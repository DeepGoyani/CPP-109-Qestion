#include<iostream>
#include<string>

using namespace std;

string Marks(int mark) {
    if (mark >= 90 && mark <= 100) {
        return "A"; 
    } else if (mark >= 80 && mark < 90) {
        return "B"; 
    } else if (mark >= 70 && mark < 80) {
        return "C";
    } else if (mark >= 60 && mark < 70) {
        return "D"; 
    } else if (mark < 60 && mark >= 0) {
        return "F";
    } else {
        return "enter valid score";
    }
}

int main() {
    int mark;
    cout << "Enter the student's score (0-100): ";
    cin >> mark;
    string grade = Marks(mark);
    cout << "The student's grade is: " << grade << std::endl;

    return 0;
}