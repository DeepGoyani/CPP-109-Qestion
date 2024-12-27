#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    set<int> unique(arr.begin(), arr.end());
    vector<int> result(unique.begin(), unique.end());
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    sort(arr.begin(), arr.end());
    auto last = unique(arr.begin(), arr.end());
    arr.erase(last, arr.end());

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    unordered_set<int> seen;
    vector<int> result;

    for (int num : arr) {
        if (seen.find(num) == seen.end()) {
            result.push_back(num);
            seen.insert(num);
        }
    }

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
