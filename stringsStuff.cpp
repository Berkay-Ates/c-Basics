#include<iostream>

using namespace std;

int main(){
    string myString  = "mystring";

    cout << myString.length();
    cout << myString << endl;
    myString[0] = 'c';
    cout << "how to solve this problem"<< endl;
    cout << myString << endl;
    // myString[1409] = 'D';
    cout << myString << endl;
    cout << myString.find("string");
    cout << myString.substr(3,6);
    return 0;
}