#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

void printInvertedTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printInvertedTriangle(n);
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int i = n;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    }
    return 0;
}
