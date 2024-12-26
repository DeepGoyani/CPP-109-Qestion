#include <iostream>
using namespace std;

bool isEligibleToVote(int age) {
    return age >= 18;
}

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (isEligibleToVote(age)) {
        cout << "Eligible to vote." << endl;
    } else {
        cout << "Not eligible to vote." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

string checkEligibility(int age) {
    if (age >= 18) return "Eligible to vote.";
    else return "Not eligible to vote.";
}

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    cout << checkEligibility(age) << endl;
    return 0;
}
