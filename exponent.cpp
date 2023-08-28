#include<iostream>

using namespace std;

int expoNent(int base, int power){

    int res =1 ; 

    for(int i=0;i<power;i++){
        res= res*base;
    }
    return res;
}

int main(){

    cout << expoNent(1,100) << endl;
    cout << expoNent(8,0) << endl;
    cout << expoNent(3,3) << endl;
    cout << expoNent(5,2) << endl;
  
    
    return 0;
}