#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printPyramid(n);
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n - i) {
            cout << " ";
            j++;
        }
        j = 1;
        while (j <= (2 * i - 1)) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
#include <iostream>
using namespace std;

void printPyramid(int n, int i) {
    if (i > n) return;

    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int j = 1; j <= (2 * i - 1); j++) {
        cout << "*";
    }
    cout << endl;
    printPyramid(n, i + 1);
}

int main() {
    int n;
    cin >> n;
    printPyramid(n, 1);
    return 0;
}
