#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Hello there! What's your name, friend?\n"; //Ask for name
    std::string userName; //new string "userName" - no value
    std::cin >> userName; //set input to string variable "userName"
    std::cout << "Well hello there, " << userName << ".\n\n"; //output of "Well hello there, " + userName -- e.g. "Well hello there, Marcus."
    std::cout << "Give me a number.\n";
    int inputOne;
    int inputTwo;
    std::cin >> inputOne;
    std::cout << "Give me a another number.\n";
    std::cin >> inputTwo;
    std::cout << "The sum of your numbers is " << (inputOne + inputTwo) << "!";
    return(0);
}