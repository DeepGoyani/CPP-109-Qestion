// #include <iostream>
// #include <string>
// using namespace std;


// string getFileExtensionBruteForce(string filename) {

//     int pos = filename.rfind('.');
    
 
    
//         return filename.substr(pos + 1);  
  
// }
// int main() {
//     string filename = "document.pdf";  
//     cout << "File Extension (Brute Force): " << getFileExtensionBruteForce(filename) << endl;

//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// string getFileExtensionEasy(string filename) {
//     size_t pos = filename.find_last_of('.');
    
//         return filename.substr(pos + 1);  
    
// }

// int main() {
//     string filename = "document.pdf";  
//     cout << "File Extension (Easy Approach): " << getFileExtensionEasy(filename) << endl;

//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;
string getFileExtension(string filename) {
    size_t len=filename.length();
    int pos;
    for(int i=0;i<len;i++){
        if(filename[i]=='.'){
            pos=i;
        }
    }
    return filename.substr(pos + 1);  
}
int main() {
    string filename = "document.pdf";  
    cout << "File Extension (Easy Approach): " << getFileExtension(filename) << endl;

    return 0;
}