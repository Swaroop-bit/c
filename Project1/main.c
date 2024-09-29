#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initalize random number generator
    srand(time(0));

    // genertae random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guessed_number;

    // print the random number
    //  printf("Rndom Number: %d\n", randomNumber);

    do
        (
            printf("Guess the Number");
            scanf("%d", &guessed_number);
            if (guessed_number > randomNumber) {
                printf("Lower Number please!");
            } else if (guessed_number < randomNumber) {
                printf("Higgher Number please!");
            } else {
                printf("You guessed the number correct, Congrats!!");
            } number_of_guesses++; )
             while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses", number_of_guesses);

    return 0;
}