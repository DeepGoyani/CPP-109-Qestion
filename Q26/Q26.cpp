#include <iostream>
using namespace std;

int main() {
    string str = "codinggita";
    char ch = 'a';
    
    if (str.substr(str.length() - 1) == string(1, ch)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string str = "codinggita";
    char ch = 'a';
    
    if (str.compare(str.length() - 1, 1, 1, ch) == 0) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}
