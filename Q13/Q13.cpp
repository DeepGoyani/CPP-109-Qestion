#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 3) {
            found = true;
            break;
        }
    }

    cout << (found ? "true" : "false") << endl;

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    bool found = find(arr.begin(), arr.end(), 3) != arr.end();

    cout << (found ? "true" : "false") << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    bool found = false;

    for (int num : arr) {
        if (num == 3) {
            found = true;
            break;
        }
    }

    cout << (found ? "true" : "false") << endl;

    return 0;
}
