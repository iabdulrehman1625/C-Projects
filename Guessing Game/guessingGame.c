#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number, guess, numberOfGuesses = 0;
    // Seed the random numer generator with the current time.
    srand(time(0));
    number = rand() % 100 + 1;
    // Generate a random number between 1 and 100
    printf("Welcome to the number guessing game\n");
    printf("I have selected a number between 1 and 100. Try to guess it !\n");
    // Loop untile the user guesses the correct number.
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        numberOfGuesses++;

        if(guess > number) {
            printf("Lower number please !\n");
        } else if(guess < number) {
            printf("Higher number please !\n");
        } else {
            printf("Congratulations ! You guessed it in %d attemps \n", numberOfGuesses);
        }
    } while(guess != number);

    return 0;
}