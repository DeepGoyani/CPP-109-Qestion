#include <iostream>
using namespace std;

void findpair(int nums[], int n, int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                cout<<"Pair found: "<<nums[i]<<" "<<nums[j]<<endl;
                }
    }
}
}
int main(){
    int nums[] = {2,7,11,15};
    int n = sizeof(nums)/sizeof(nums[0]);
    int target = 9;
    findpair(nums, n, target);
}

#include <iostream>
using namespace std;
void findPairsHashMap(int nums[], int n, int target) {
    bool foundPair = false;
    bool seen[1000] = {false}; 


    for (int i = 0; i < n; i++) {
        int complement = target - nums[i]; 
    
        if (complement >= 0 && complement < 1000 && seen[complement]) {
  
            cout << "[" << complement << ", " << nums[i] << "]" << endl;
            foundPair = true;
        }


        if (nums[i] >= 0 && nums[i] < 1000) {
            seen[nums[i]] = true;
        }
    }


    if (!foundPair) {
        cout << "No pairs found!" << endl;
    }
}

int main() {
    int nums[] = {2, 7, 11, 15}; 
    int n = sizeof(nums) / sizeof(nums[0]); 
    int target = 9; 
   
    cout << "Pairs with sum " << target << ":" << endl;
    findPairsHashMap(nums, n, target);

    return 0;
}