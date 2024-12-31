#include <iostream>
using namespace std;

int main() {
    string str1 = "hello";
    string str2 = " world";
    cout << str1 + str2;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string str1 = "hello";
    string str2 = " world";
    str1.append(str2);
    cout << str1;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string str1 = "hello";
    string str2 = " world";
    for (char c : str2) {
        str1.push_back(c);
    }
    cout << str1;
    return 0;
}
