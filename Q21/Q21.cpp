#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str = "hello";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string str = "hello";
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    cout << str;
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str = "hello";
    for_each(str.begin(), str.end(), [](char &c) { c = toupper(c); });
    cout << str;
    return 0;
}
