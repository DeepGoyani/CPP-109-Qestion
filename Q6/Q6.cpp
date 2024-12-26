#include <iostream>
#include <string>
using namespace std;

void checkLogin(string username, string password) {
    if (username == "admin" && password == "1234") {
        cout << "Login successful" << endl;
    } else {
        cout << "Login failed" << endl;
    }
}

int main() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    checkLogin(username, password);

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

void checkLogin(string username, string password) {
    cout << ((username == "admin" && password == "1234") ? "Login successful" : "Login failed") << endl;
}

int main() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    checkLogin(username, password);

    return 0;
}
