#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool allPositive = true;

    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            allPositive = false;
            break;
        }
    }

    cout << (allPositive ? "true" : "false") << endl;

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 5, 9, 1, 7};
    bool allPositive = all_of(arr.begin(), arr.end(), [](int num) { return num > 0; });

    cout << (allPositive ? "true" : "false") << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 5, 9, 1, 7};
    bool allPositive = true;

    for (int num : arr) {
        if (num <= 0) {
            allPositive = false;
            break;
        }
    }

    cout << (allPositive ? "true" : "false") << endl;

    return 0;
}
