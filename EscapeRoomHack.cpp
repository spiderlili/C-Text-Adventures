#include <iostream>

void PrintIntroduction(){
    // TODO: Include ASCII Art
    std::cout << "You are a secret agent breaking into a secure server room\n";
    std::cout << "You need to enter the correct codes to continue..\n";
}

void PlayGame(){
    PrintIntroduction();

    int CodeA = 4;
    int CodeB = 3;
    int CodeC = 2;
    int CodesSum = CodeA + CodeB + CodeC;
    int CodesMultiplied = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code.\n";
    std::cout << "The codes multiply to give: " << CodesMultiplied << std::endl;
    std::cout << "The codes add up to: " << CodesSum << std::endl;
    std::cout << "Enter your guess of 3 numbers separated by spaces: \n";

    int PlayerGuessCodeA, PlayerGuessCodeB, PlayerGuessCodeC;
    std::cin >> PlayerGuessCodeA;
    std::cin >> PlayerGuessCodeB;
    std::cin >> PlayerGuessCodeC;
    std::cout << "You entered: " << PlayerGuessCodeA << PlayerGuessCodeB << PlayerGuessCodeC << std::endl;

    int PlayerGuessSum = PlayerGuessCodeA + PlayerGuessCodeB + PlayerGuessCodeC;
    int PlayerGuessMultiplied = PlayerGuessCodeA * PlayerGuessCodeB * PlayerGuessCodeC;

    if(PlayerGuessSum == CodesSum && PlayerGuessMultiplied == CodesMultiplied){
        std::cout << "You win!\n";
    }
    else{
        std::cout << "You lose!\n";
    }
}

int main(){
    while(true){
    PlayGame();
    }
    return 0;
}