#include<iostream>

using namespace std;

int main(){
    string name = "john";
    int age = 13;

    cout << " Hello " << name << endl;
    cout << name << " age is" << age << endl;

    name = "new name assigned";
    age = 14;

    cout << " Hello " << name << endl;
    cout << name << " age is" << age << endl;
    
    return 0;
}