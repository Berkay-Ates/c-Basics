#include<iostream>

using namespace std;

int main(){

    int index = 0; 
    while(index <=100){
        cout << index << endl;
        index++;
    }

    do{
        cout << index << endl;
        index++;
    }while(index <=100);
    
    return 0;
}