#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number_gen() {
    srand(time(NULL));
    //Creates the variables that will be used to determine a random number
    int randomNum;
    int difficulty;
    // Prompts the user to enter a number based on the difficulty of the game they
    //wish to play
    printf("Let's play Guess the Number\n");
    printf("Pick a difficulty level (1,2,3): ");
    scanf("%d", &difficulty);
    //Generates a random number, with the range of numbers to choose from being set
    //based on the user's input for diffiuclty
    switch(difficulty) {
        case 1:
            randomNum = rand() % 10;
            break;
        case 2:
            randomNum = rand() % 100;
            break;
        case 3:
            randomNum = rand() % 1000;
            break;
    }
    return randomNum;
}
int guess_number(int randomNum) {
    //Creates the variables used for the user's guessing
    int playAgain;
    int guessCount = 1;
    int userGuess;
    //Informs the user a number has been selected and prompts them to enter a number
    //to guess
    printf("I have my number. What's your guess? ");
    scanf("%d", &userGuess);
    while (guessCount < 9) {
        //If the user's guess is higher than the random number, the system prompts
        //the user to guess a lower number and
        //their guess count is increased by 1
        if (userGuess > randomNum) {
            printf("Too high. Guess again: ");
            scanf("%d", &userGuess);
            guessCount = guessCount + 1;
        }
    //If the user's guess is lower than the random number, the system prompts
    //the user to guess a higher number and
    //their guess count is increased by 1
    else if (userGuess < randomNum) {
        printf("Too low. Guess again: ");
        scanf("%d", &userGuess);
        guessCount = guessCount + 1;
    }
    //If the user's guess is the same as the winning number, the system
    //informs the user they've won and tells them
    //how many guesses it took to win the game
    else if (userGuess = randomNum) {
        printf("You got it in %d guesses!\n", guessCount);
        break;
    }
    //If the user's guess count gets to 8 guesses, the system informs the user
    //they've lost the game
    if (guessCount == 8) {
        printf("Better luck next time!");
        break;
    }
 }

}
int main() {
    int playAgain = 1;
    int difficulty;
    while (playAgain != 0) {
    int randomNum = random_number_gen(difficulty);
    guess_number(randomNum);
    //Asks the user if they want to play the game again
    printf("\nPlay again? ");
    scanf("%d", &playAgain);
    }
}
//Assignment 2.2
// © 2024 Logan Kerner <lo660771@ucf.edu>