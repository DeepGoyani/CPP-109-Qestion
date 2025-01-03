#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    cout << "[" << arr[0] << ", " << arr[n - 1] << "]";
    return 0;
}
#include <iostream>
using namespace std;

void printFirstAndLast(int arr[], int n) {
    cout << "[" << arr[0] << ", " << arr[n - 1] << "]";
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    printFirstAndLast(arr, n);
    return 0;
}
