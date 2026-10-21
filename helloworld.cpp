#include <iostream>
#include <cmath>


namespace first{  //read this part after varialbles
  int x = 2;      // its can be used to use same variable for diffrent values

}

int main(){
  //use using namespace std to avoid writing std again and again

  //integer(Whole number)
  int x = 7.8;
  std::cout << x << '\n';
  // std::cout << first::x << '\n'; example for namespace 
                     //or
  //by using name space first

   //double(number with decimal)
   double price = 100.99;
    std::cout << price << '\n';
 
  //single charecter 
  char grade = 'A';
   std::cout << grade << '\n';

  // boolen (true or false)
  bool student = true;
  std::cout << student << '\n';

 //string(stores the whole words)
 std::string name = "Altaf";
   
  std::cout << "hello " <<name << '\n';

  //const used for making the values unchangeable 
  const int speed_of_light = 299999;
  // speed_of_light =300000; cant change the value,try it by removing '//'
   std::cout << speed_of_light;


//arathamatic operators (+ - * /)

// addition +
int students = 5;

students = students + 1;
//or students+=1; this is same as students = students + 1;
//students++;
std::cout << students << '\n';

  //subtraction -
  int apple = 10;
  apple = apple -1;
//or apple-=1; this is same as apple = apple - 1;
//apple--;
std::cout << apple << '\n';

  //multiplication *
  int oranges = 10;
oranges = oranges * 2;
//or oranges*=2; this is same as oranges = oranges * 2;
std::cout << oranges << '\n';

  //division /
  int mangoes = 10;
mangoes = mangoes / 2;
//or mangoes/=2; this is same as mangoes = mangoes / 2;
std::cout << mangoes << '\n';


//parentessis has higher priority than other operators
//multiplication and devision 
//addition and subtraction


  //type conversion 
    //it is used to convert one data type to another data type by using such as (int) or (double) or (float)

  int correct = 5;
  int total_questions = 10;
  
  //double score = correct/total_questions * 100; first try this one 
  double score = correct/(double)total_questions * 100;

  std::cout << score << "% " <<'\n';

// function 
//let:
double a = 2;
double b = 3;
double c;
//1.max is used to find the maximum value between two numbers
c = std::max(a,b);
std::cout << c << '\n';
//2.min is used to find the minimum value between two numbers
c = std::min(a,b);
std::cout << c << '\n';
//3.pow is used to find the power of a number
c = std::pow(a,b);
std::cout << c << '\n';
//4.sqrt is used to find the square root of a number
c = std::sqrt(a);
std::cout << c << '\n';
//5.round is used to round a number to the nearest integer
c = std::round(2.5);
std::cout << c << '\n';
//6.floor is used to round a number down to the nearest integer
c = std::floor(2.5);
std::cout << c << '\n';
//7.ceil is used to round a number up to the nearest integer
c = std::ceil(2.5);
std::cout << c << '\n';
//8.abs is used to find the absolute value of a number
c = std::abs(-2.5);
std::cout << c << '\n';//note; abs converts the negative value to positive value
//note: all the above functions are defined in the cmath library

//if else is used to make decisions as true or false
int age;
std::cout << "whats your age?: ";
std::cin >> age;
if(age >= 18){
  std::cout << "you are eligible to vote" << '\n';
}
else if(age < 0){                                             //else if is used after if first condtion is not true then it checks the next condition
  std::cout << "you are not born yet" << '\n';
}
else{
  std::cout << "you are not eligible to vote" << '\n';
}

//ternary operator is used to make decisions as true or false in a single line
//syntax: condition ? true : false
int number = 10;
number > 0 ? std::cout << "number is positive" << '\n' : std::cout << "number is negative" << '\n';

//std::cout << (number > 0 ? std::cout << "number is positive" << '\n' : std::cout << "number is negative");20


//logical operators 
//1. && (and) operator is used to check if both conditions are true
//2. || (or) operator is used to check if at least one condition is true
//3. ! (not) operator is used to check if a condition is false
//syntax: condition1 && condition2 ? true : false

//strinhg ffunctions
//1.length is used to find the length of a string .length()
//2.substr is used to find a substring of a string .substr(start_index, length)
//3.empty is used to check if a string is empty .empty()
//4.find is used to find a substring in a string .find(substring)
//5.replace is used to replace a substring in a string .replace(start_index, length, new_substring)
//6.clear is used to clear a string  .clear()
//7.append is used to append a string to another string .append(new_string)
//8.compare is used to compare two strings .compare(string1, string2)


                                  

   return 0;
}



