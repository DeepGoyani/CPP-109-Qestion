#include <iostream>
using namespace std;

int main() {
    string str = " hello ";
    str.erase(0, str.find_first_not_of(" ")); 
    str.erase(str.find_last_not_of(" ") + 1);
    cout << str;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string str = " hello ";
    int start = 0, end = str.length() - 1;

    while (start <= end && str[start] == ' ') start++;
    while (end >= start && str[end] == ' ') end--;

    str = str.substr(start, end - start + 1); 
    cout << str;
    return 0;
}
