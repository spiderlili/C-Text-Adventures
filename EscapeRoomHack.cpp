#include <iostream>

int main(){
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl; 
    std::cout << "You need to enter the correct codes to continue..";

    int CodeA = 4;
    int CodeB = 3;
    int CodeC = 2;
    int CodesSum = CodeA + CodeB + CodeC;
    int CodesMultiplied = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code." << std::endl;
    std::cout << "The codes multiply to give: " << CodesMultiplied << std::endl;
    std::cout << "The codes add up to: " << CodesSum << std::endl;

    int PlayerGuess;
    
    return 0;
}