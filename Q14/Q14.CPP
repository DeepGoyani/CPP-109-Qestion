#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};
    nums.insert(nums.begin(), 0);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int newNums[n + 1];

    newNums[0] = 0;
    for (int i = 0; i < n; i++) {
        newNums[i + 1] = nums[i];
    }

    for (int i = 0; i < n + 1; i++) {
        cout << newNums[i] << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> nums = {1, 2, 3, 4};
    nums.push_front(0);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
