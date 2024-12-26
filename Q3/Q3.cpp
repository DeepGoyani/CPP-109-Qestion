#include <iostream>
#include <string>
using namespace std;

string determineTriangleType(int side1, int side2, int side3) {
    if (side1 == side2 && side2 == side3) {
        return "Equilateral";
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        return "Isosceles";
    } else {
        return "Scalene";
    }
}

int main() {
    int a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    cout << "The triangle is " << determineTriangleType(a, b, c) << "." << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

string determineTriangleType(int side1, int side2, int side3) {
    return (side1 == side2 && side2 == side3) ? "Equilateral" :
           (side1 == side2 || side2 == side3 || side1 == side3) ? "Isosceles" :
           "Scalene";
}

int main() {
    int a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    cout << "The triangle is " << determineTriangleType(a, b, c) << "." << endl;
    return 0;
}
#include <iostream>
using namespace std;

bool isEquilateral(int side1, int side2, int side3) {
    return (side1 == side2 && side2 == side3);
}

bool isIsosceles(int side1, int side2, int side3) {
    return (side1 == side2 || side2 == side3 || side1 == side3) && !isEquilateral(side1, side2, side3);
}

bool isScalene(int side1, int side2, int side3) {
    return (side1 != side2 && side2 != side3 && side1 != side3);
}

int main() {
    int a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    if (isEquilateral(a, b, c)) {
        cout << "The triangle is Equilateral." << endl;
    } else if (isIsosceles(a, b, c)) {
        cout << "The triangle is Isosceles." << endl;
    } else if (isScalene(a, b, c)) {
        cout << "The triangle is Scalene." << endl;
    }

    return 0;
}
