#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string inputString = "Hello world, welcome to JavaScript!";
    stringstream ss(inputString);
    string word;
    vector<string> words;
    
    while (getline(ss, word, ' ')) {
        words.push_back(word);
    }
    
    for (const string& w : words) {
        cout << "'" << w << "' ";
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string inputString = "Hello world, welcome to JavaScript!";
    vector<string> words;
    size_t pos = 0;
    
    while ((pos = inputString.find(' ')) != string::npos) {
        words.push_back(inputString.substr(0, pos));
        inputString.erase(0, pos + 1);
    }
    words.push_back(inputString); // Add the last word

    for (const string& word : words) {
        cout << "'" << word << "' ";
    }
    return 0;
}
