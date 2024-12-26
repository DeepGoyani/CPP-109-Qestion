#include <iostream>
#include <string>
using namespace std;

string determineSign(int number) {
    if (number > 0) {
        return "Positive";
    } else if (number < 0) {
        return "Negative";
    } else {
        return "Zero";
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The number is " << determineSign(num) << "." << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

string determineSign(int number) {
    return (number > 0) ? "Positive" : (number < 0) ? "Negative" : "Zero";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The number is " << determineSign(num) << "." << endl;
    return 0;
}
