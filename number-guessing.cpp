#include <iostream>
#include <ctime>
using namespace std;

int main(){

int num;
int guess;
int tries;



srand(time(NULL));
num = (rand() % 100) + 1;

do{
 cout << "Guess a number between 1-100: ";
 cin >> ws;
 cin >> guess;
tries++;
 if(guess > num){
    cout << "To High" << "\n";
 }
 else if(guess < num) {
cout << "To Low" << '\n';
 }
 else{
   cout << "CORRECT GUESS!";
 }
}while(guess != num);





return 0;

}
 



