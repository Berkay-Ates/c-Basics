#include<iostream>

using namespace std;

int getMax(int x1, int x2){
    return x1 > x2 ? x1 : x2;
}

int getMaxThree(int x1, int x2,int x3){
    int result;
    if (x1>x2){
        if(x1>x3){
            result = x1;
        }else{
            result = x3;
        }
    }else {
        if(x2>x3){
            result = x2;
        }else{ 
            result = x3;
        }
    }
    return result;
}

int main(){


    bool isMale = true;
    bool isTall = true;
    if(isMale && isTall){
        cout << "you are a tall male"<<endl;
    }else{
        cout << "you are wheter not tall or a female"<< endl;
    } 
    cout << getMaxThree(2,6,1)<< endl;
    return 0;
}


