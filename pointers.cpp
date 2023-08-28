#include<iostream>

using namespace std;

int main(){
    int age = 17;
    int *pAge = &age;
    cout << &age << endl;
    cout << pAge << endl;
    cout << *pAge << endl;


    return 0;
}