#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};

    sort(arr.begin(), arr.end());

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool customSort(int a, int b) {
    return a > b;  // Sort in descending order
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};

    sort(arr.begin(), arr.end(), customSort);

    cout << "Sorted array (Descending): ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

