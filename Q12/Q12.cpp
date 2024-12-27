#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    arr.push_back(6);

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newArr[n + 1];

    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }
    newArr[n] = 6;

    for (int i = 0; i <= n; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};
    vector<int> vec(arr.begin(), arr.end());
    vec.push_back(6);

    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
