#include <iostream>
#include <string>
#include <array>
#include <Windows.h>
#include <time.h>

// Variables that make the game tick.
int numberPressed;

int score = 0;
    
bool gameLost;

// Text that prefaces all messages.
std::string intro = "Simon: ";

// Function that makes using cout easier
void say(std::string message){
        std::cout << intro + message << std::endl;
}

int main() {

    // Make a random seed, then fill an array with random numbers5
    srand (time(NULL));

    int simonsNumbers[5];

    for(int i = 0; i < sizeof(simonsNumbers); i++){
        simonsNumbers[i] = rand() % 10;
    }


    // Introduction
    say("Welcome!");
    Sleep(1500);
    say("I will show you a sequence of numbers.");
    Sleep(2000); 
    say("Type a number and press Enter, in the same order as I did.");
    Sleep(4000);
    
    system("CLS");


    // Game loop
    while(1){
        // Shows the numbers one by one
        for(int i = 0; i < score + 1; i++){
            say(std::to_string(simonsNumbers[i]));
            Sleep(800);
            system("CLS");
            Sleep(150);
        }
        // The same for loop, but it waits for the user to enter a number
        for(int i = 0; i < score + 1; i++){
            std::cin >> numberPressed;
            // Checks if the player is wrong. (I couldn't find a method to end the whole program from inside this loop)
            if(numberPressed != simonsNumbers[i]){
                gameLost = true;
                break;
            }    

            system("CLS");
        }
        
        score ++;

        // Checks if the game should be lost
        if(gameLost){
            say("Game over! Thanks for playing!");
            Sleep(1000);
            break;
        }

        // Checks if the game should be won
        if(score == sizeof(simonsNumbers)/sizeof(simonsNumbers[0])){
            say("You have won! You are incredible and amazing!");
            Sleep(1000);
            break;
        }
    }

    // // Simply return number
    // std::cout << "number: " + std::to_string(numberPressed) << std::endl;

    // if(numberPressed == currentCorrectNumber){
    //     say("You win!");
    // } else {
    //     say("You lose!");
    // }

}