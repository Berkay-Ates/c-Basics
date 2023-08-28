#include<iostream>

using namespace std;

int main(){
   
   int secretNum = 7;

   int guess = 0;

   int guessCount = 0;
   int guessLimit = 5;

   do{
    cout << "enter your guess: " ;
    cin >> guess;
    guessCount++;
   }while(secretNum != guess && guessLimit>guessCount);

   cout << "you won!"<< endl;

    return 0;
}