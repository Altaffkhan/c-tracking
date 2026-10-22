#include <iostream>
#include <cmath>
using namespace std;

int main(){
int amount;
    int c;
    int b = 0;
int a;
double name;
int age;
string name1;
int pass;
string newpass;
string repass;
int W;


//first
cout << "**********************Welcome to XYZ bank *********************" << '\n';
cout << "1. New user?: " << '\n';
cout << "2. Existing user?: " << '\n';
 cout << "3. Exit: " << '\n';

cout << "Enter your choice(1-3): ";
cin >> a;
// creating a new user
if(a==1){
  cout << "Enter Your Full Name: ";
  cin >> ws;
 getline(cin, name1);

cout << "Enter Your Age: ";
cin >> ws;
cin >> age;

cout << "Enter A Password: ";
cin >> ws;
getline(cin, newpass);

cout << "Re-Enter The Password For Conformation: ";
cin >> ws;
getline(cin, repass);

while(repass != newpass){
cout <<"Password Not Matching" << '\n';
cout << "Re-Enter The Password For Conformation: ";
cin >> ws;
getline(cin, repass);

}
 cout << "Congratulations Account Created!" << "\n";
 cout << "Initial Balance = 0 " << '\n';
 cout << "1. Deposite Money" << '\n';
 cout << "2. Withdraw money" << '\n';
 cout << "Enter Your Choice(1-2): ";
 cin >> c;
 //amount deposite
if(c == 1){
 cout << "Enter The Amount: ";
 cin >> ws;
 cin >> amount ;
 if(amount < 0){
    cout << "No negative currency Exists";
 } else {
     cout << "New Balance: " << (b + amount);
 }
}
else if(c == 2){
cout << "enter The Amount To Withdraw: ";
cin >> ws;
cin >> W;
if(b = 0){
    cout << "Account Has No Money To Withdraw";
}
}
else {
    cout << "Invalid Choice!";
}



}

//Already existing user
else if(a==2){
cout << "Enter Your Full Name: ";
cin >> ws;
getline(cin, name1);

cout << "Enter Your Password: ";
cin >> pass;

cout << "1. Deposite Money" << '\n';
 cout << "2. Withdraw money" << '\n';
 cout << "Enter Your Choice(1-2): ";
 cin >> c;
 //amount deposite
if(c == 1){
 cout << "Enter The Amount: ";
 cin >> ws;
 cin >> amount ;
 if(amount < 0){
    cout << "No negative currency Exists";
 } else {
     cout << "New Balance: " << (b + amount);
 }
}
else if(c == 2){
cout << "enter The Amount To Withdraw: ";
cin >> W;
if(b = 0){
    cout << "Account Has No Money To Withdraw";

}
}
else {
    cout << "Invalid Choice!";
}

}
//Came by mistake
else if(a==3){
    cout << "Thanks For Visiting Us! " << '\n';
}
else {
    cout << "Invalid Choice! " << '\n';
}










    return 0;
}









