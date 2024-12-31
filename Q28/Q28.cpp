#include <iostream>
using namespace std;
void largest(int a ,int b){
    if(a>b){
        cout<<"largest is:"<<a<<endl;
    }
    else{
        cout<<"largest is:"<<b<<endl;
    }
}
int main(){
    int a=10;
    int b=20;
    largest(a,b);
}
#include <iostream>
using namespace std;

void printLargestNumberTernary(int number1, int number2) {
    cout << "The largest number is: " << (number1 > number2 ? number1 : number2) << endl;
}

int main() {
    int number1 = 10; 
    int number2 = 20; 

    printLargestNumberTernary(number1, number2);

    return 0;
}

#include <iostream>
#include <algorithm> 


void printLargestNumberMax(int number1, int number2) {

    cout << "The largest number is: " << max(number1, number2) << endl;
}

int main() {
    int number1 = 10; 
    int number2 = 20; 

    printLargestNumberMax(number1, number2);

    return 0;
}