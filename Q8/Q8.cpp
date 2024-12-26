#include <iostream>
#include <vector>
using namespace std;

double findAverage(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return static_cast<double>(sum) / arr.size();
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    cout << "Average: " << findAverage(arr) << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

double findAverage(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return static_cast<double>(sum) / arr.size();
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    cout << "Average: " << findAverage(arr) << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

double findAverage(const vector<int>& arr) {
    int sum = 0;
    int i = 0;
    while (i < arr.size()) {
        sum += arr[i];
        i++;
    }
    return static_cast<double>(sum) / arr.size();
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Average: " << findAverage(arr) << endl;

    return 0;
}
