// #include <iostream> 
// using namespace std;
// void sumEvenOddDigits(int n) {

//     int evenSum = 0, oddSum = 0;
    
//     while (n > 0) {  
//         int digit = n % 10;  
        
//         if (digit % 2 == 0) {  
//             evenSum += digit;  
//         } else { 
//             oddSum += digit;  
//         }
        
//         n /= 10;  
//     }
    

//     cout << "Sum of even digits: " << evenSum << endl;  
//     cout << "Sum of odd digits: " << oddSum << endl;  
// }

// int main() {
//     int n;  
//     cout << "Enter a number: ";  
//     cin >> n; 
//     sumEvenOddDigits(n);  
    
//     return 0;  
// }

#include <iostream>
using namespace std;

void sumEvenOddDigits(string n) {
    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < n.length(); i++) {
        int digit = n[i] - '0';
        if (digit % 2 == 0) {
            evenSum += digit; 
        } else {
            oddSum += digit; 
        }
    }
    cout << "Sum of even digits: " << evenSum << endl;
    cout << "Sum of odd digits: " << oddSum << endl;
}

int main() {
    string n;
    cout << "Enter a number: ";
    cin >> n;
    sumEvenOddDigits(n);
    return 0;
}

