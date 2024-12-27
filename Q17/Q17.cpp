#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Positive numbers: " << positiveCount << endl;
    cout << "Negative numbers: " << negativeCount << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int positiveCount = 0, negativeCount = 0;

    for (int num : arr) {
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    }

    cout << "Positive numbers: " << positiveCount << endl;
    cout << "Negative numbers: " << negativeCount << endl;

    return 0;
}
