#include <iostream>
#include <cmath>

int main() {

 //loops
//while loop is used to repeat a block of code while a condition is true
//syntax: while(condition){block of code}

//do while loop is used to repeat a block of code at least once and then while a condition is true
//syntax: do{block of code}while(condition);


//for loop is used to repeat a block of code a specific number of times
//syntax: for(initialization; condition; increment/decrement){block of code}

//break is used to exit a loop 
// continue is used to skip the current iteration of a loop and continue with the next iteration

for(int i =1; i <= 10 ; i++){
  if(i == 5){
    break;  //countinue will skip only 5
  }
  std::cout << i << '\n';
}

//nested loop is a loop inside a loop
/* syntax: for(int i = 1; i <= 3; i++){
    for(int j = 1; j <= 3; j++){
        std::cout << i << " " << j << '\n';
    }
}
*/



    return 0;
}