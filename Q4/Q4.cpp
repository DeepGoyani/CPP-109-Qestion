#include <iostream>
using namespace std;

string checkVowelOrConsonant(char ch) {
    char lowerChar = tolower(ch);

    if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
        return "Vowel";
    } else if ((lowerChar >= 'a' && lowerChar <= 'z')) {
        return "Consonant";
    } else {
        return "Not an alphabet";
    }
}

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    cout << "The character is a " << checkVowelOrConsonant(c) << "." << endl;
    return 0;
}
#include <iostream>
using namespace std;

string checkVowelOrConsonant(char ch) {
    char lowerChar = tolower(ch);

    switch (lowerChar) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return "Vowel";
        default:
            if (lowerChar >= 'a' && lowerChar <= 'z') {
                return "Consonant";
            } else {
                return "Not an alphabet";
            }
    }
}

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    cout << "The character is a " << checkVowelOrConsonant(c) << "." << endl;
    return 0;
}

