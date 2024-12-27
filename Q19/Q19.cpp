#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool isSorted = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = false;
            break;
        }
    }

    cout << (isSorted ? "true" : "false") << endl;

    return 0;
}
#include <iostream>
using namespace std;

bool checkSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << (checkSorted(arr, n) ? "true" : "false") << endl;

    return 0;
}
