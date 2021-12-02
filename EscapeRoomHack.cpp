#include <iostream>
#include <ctime> 

void PrintIntroduction(int LevelDifficulty){
    // TODO: Include ASCII Art
    std::cout << "\nYou are a secret agent breaking into a secure server room located at Level " << LevelDifficulty;
    std::cout << "\nYou need to enter the correct codes to continue..\n";
}

bool PlayGame(int Difficulty){
    PrintIntroduction(Difficulty);

    int CodeA = rand() % Difficulty + Difficulty;
    int CodeB = rand() % Difficulty + Difficulty; 
    int CodeC = rand() % Difficulty + Difficulty;
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
        std::cout << "You win! Moving onto the next level..\n";
        return true;
    }
    else{
        std::cout << "You lose! Try again..\n";
        return false;
    }
}

int main(){
    srand(time(NULL)); // Randomise the seed for different results based on computer's time
    const int MaxLevelDifficulty = 10;
    int LevelDifficulty = 1;
    while (LevelDifficulty <= MaxLevelDifficulty) // Loop game until all levels are completed
    {
        bool bLevelCompleted = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if(bLevelCompleted){
            // Increase level difficulty as the level increases
            ++LevelDifficulty;
        }
    }
    std::cout << "Congrats! You've beaten the game by completing all levels!";
    return 0;
}