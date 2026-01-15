#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char **argv)
{
	int guessed_number;
    int tries= 5;
    
    // Seed the random number generator with the current time
    srand(time(NULL));  // Seeding random number generator
    
    guessed_number= rand() % 20+1; // Random number between 1 and 20
    
    //printf("%i", guessed_number);
    
    printf("Welcome to the Guessing Game!\n");
    
    while(tries >0){
        int my_number;
        printf("You have %d tries left.\n",tries);
        printf("Guess a number between 1-20: ");
        scanf("%d", &my_number);
        if(my_number < guessed_number && my_number>1){
            printf("Your number is too low\n");
        }
        else if (my_number > guessed_number && my_number<21){
            printf("Your number is too high\n");
        }
        else if(my_number == guessed_number) {
            printf("Congratulations you won\n");
            break;
        }
        else if(my_number <1 || my_number>20){
            printf("The number guessed should be between 1 and 20\n");
        }
        tries--;
        if (tries == 0) {
        printf("Sorry, you have no tries left. You lose! The number was %d.\n", guessed_number);
    }
    }
    
    
    
	return 0;
}
