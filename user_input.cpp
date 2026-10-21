#include <iostream>

int main(){
   
    /* cout << for display or output
      cin >> for input */

    std::string name;
    std::cout << "your name: ";
    std::cin >> name;
    //use getline(std::cin, name); to get the whole name with spaces
    // std::getline(std::cin >> std::ws, name);
    //use std::ws to ignore the white spaces before the input

    
    std::cout << "hello " << name << '\n';

    return 0;
}