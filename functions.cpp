#include <iostream>
using namespace std;

void sayHi(string name,int age);
double cube(double number);

int main(){
    string name;
    getline(cin,name);

    sayHi(name,34);
    sayHi("james",23);
    sayHi("kirk",65);

    cout << "number is 5 so cube of 5 is " << cube(5) << endl;   
    
    return 0;
}

double cube(double number){
    return number*number*number;
}


void sayHi(string name,int age){
    cout << "hello " << name <<  " you are " << age << " years old" << endl;
}