#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age < 0) {
        cout << "Invalid age";
    } else if (age <= 12) {
        cout << "Child";
    } else if (age <= 19) {
        cout << "Teenager";
    } else if (age <= 35) {
        cout << "Young Adult";
    } else if (age <= 50) {
        cout << "Middle-Aged Adult";
    } else if (age <= 65) {
        cout << "Senior Adult";
    } else {
        cout << "Elderly";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    switch (age / 10) {
        case 0:
        case 1: cout << (age <= 12 ? "Child" : "Teenager"); break;
        case 2:
        case 3: cout << "Young Adult"; break;
        case 4:
        case 5: cout << "Middle-Aged Adult"; break;
        case 6: cout << "Senior Adult"; break;
        default: cout << (age < 0 ? "Invalid age" : "Elderly");
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

string categorizeAge(int age) {
    if (age < 0) return "Invalid age";
    else if (age <= 12) return "Child";
    else if (age <= 19) return "Teenager";
    else if (age <= 35) return "Young Adult";
    else if (age <= 50) return "Middle-Aged Adult";
    else if (age <= 65) return "Senior Adult";
    else return "Elderly";
}

int main() {
    int age;
    cin >> age;

    cout << categorizeAge(age);
    return 0;
}
