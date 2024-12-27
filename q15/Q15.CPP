#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    nums.pop_back();

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < n - 1; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
