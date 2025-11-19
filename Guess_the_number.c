#include <stdio.h>
#include <stdlib.h>   // For rand() and srand()
#include <time.h>     // For time()

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int num = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // Print the random number
    // printf("Random number (1-100): %d\n", num);

    do
    {
      printf("Guess the number:\n");
      scanf("%d",&guessed_number);
      if (guessed_number>num)
      {
        printf("Lower no please\n");
      }
      else if(guessed_number<num)
      {
        printf("Higher no please\n");
      }
      else
      {
        printf("Congrats!!\n");
      }
      
      
      no_of_guesses++;
    } while (guessed_number!=num);
    
    printf("You guessed the number in %d guesses",no_of_guesses);

    return 0;
}
