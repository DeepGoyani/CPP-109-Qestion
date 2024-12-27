#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {80, 30, 70, 50, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxElem = *max_element(arr, arr + n);
    int minElem = *min_element(arr, arr + n);

    cout << "Difference: " << maxElem - minElem << endl;

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int findDifference(int arr[], int n) {
    int maxElem = *max_element(arr, arr + n);
    int minElem = *min_element(arr, arr + n);
    return maxElem - minElem;
}

int main() {
    int arr[] = {80, 30, 70, 50, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Difference: " << findDifference(arr, n) << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[] = {80, 30, 70, 50, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxElem = arr[0], minElem = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElem) {
            maxElem = arr[i];
        }
        if (arr[i] < minElem) {
            minElem = arr[i];
        }
    }

    cout << "Difference: " << maxElem - minElem << endl;

    return 0;
}
