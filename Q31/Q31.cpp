#include <iostream>
#include <string>
using namespace std;

string repeatString(const string &str, int times) {
    string result = "";
    for (int i = 0; i < times; i++) {
        result += str;
    }
    return result;
}

int main() {
    string input;
    int times;
    cin >> input >> times;

    string output = repeatString(input, times);
    cout << output;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

string repeatString(const string &str, int times) {
    string result;
    result.reserve(str.size() * times); // Optimize memory allocation
    for (int i = 0; i < times; i++) {
        result.append(str);
    }
    return result;
}

int main() {
    string input;
    int times;
    cin >> input >> times;

    string output = repeatString(input, times);
    cout << output;

    return 0;
}
