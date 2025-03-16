#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void guesss(int guess, int random)
{

    int range[100], number_of_guesses = 0;
    do
    {
        printf("enter a number between (1 to 100): ");
        scanf("%d", &guess);
        number_of_guesses++;
        if (guess < random)
        {
            printf("guess a larger number");
        }
        else if (guess > random)
        {
            printf("guess a smaller number");
        }
        else
        {
            printf("you won the match by guessing %d number of times .", number_of_guesses);
        }
    } while (guess != random);
}

int main()
{
    int guess, random = rand() % 100 + 1;
    srand(time(NULL));
    printf("%d\n", random);
    printf("WELCOME TO THE WORLD OF GUESSING!!\n LETS HAVE FUN WITH GUESSING \n SO GET READY::\n");

    printf("enter a numebr between (1 to 100) : ");
    scanf("%d", &guess);
    guesss(guess, random);
    printf("\n bye bye Thanks for playing the game !!");
    printf("\nDeveloped by :  Souptik");
}