#include <iostream>
using namespace std;

int main() {
    string inputString = "Hello, World!";
    cout << inputString.size();
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string inputString = "Hello, World!";
    cout << inputString.length();
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string inputString = "Hello, World!";
    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }
    cout << length;
    return 0;
}
