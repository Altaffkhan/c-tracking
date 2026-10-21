#include <iostream>
#include <cmath>
int main (){

char op;
double num1;
double num2;
double result;


std::cout << "slect an operator (+, -, * , /):";
std::cin >> op;

std::cout << "slect value of num1:";
std::cin >> num1;

std::cout << "slect value of num2:";
std::cin >> num2;

switch(op){
case '+':
result = num1 + num2;
std::cout << "resulting value is: " << result << '\n';
break;
case '-':
result = num1 - num2;
std::cout << "resulting value is: " << result << '\n';
break;
case '*':
result = num1 * num2;
std::cout << "resulting value is: " << result << '\n';
break;
case '/':
result = num1 / num2;
std::cout << "resulting value is: " << result << '\n';
break;
default:
std::cout << "invalid operator" << '\n';
break;
}



    return 0;
}
