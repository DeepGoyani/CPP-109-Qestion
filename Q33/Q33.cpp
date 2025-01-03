#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if (year % 100 == 0) {
        cout << year << " is a century year";
    } else {
        cout << year << " is not a century year";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    cout << (year % 100 == 0 ? "Century year" : "Not a century year");
    return 0;
}
#include <iostream>
using namespace std;

bool isCenturyYear(int year) {
    return year % 100 == 0;
}

int main() {
    int year;
    cin >> year;

    if (isCenturyYear(year)) {
        cout << year << " is a century year";
    } else {
        cout << year << " is not a century year";
    }

    return 0;
}
