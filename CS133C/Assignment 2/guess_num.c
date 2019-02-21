#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> 
int main()
{
    int guess, tries = 0;
    int num;
    
    char exits[128];
    char natta[128] = "n";
    char yepper[128]= "y";
    int exiting = 1;
    int downer = 0;
    int higher = 100;


    do{
        do{
        printf("Player 1 enter a number between 1 and 100:   ");
        scanf("%d", &num);
        if(num>100){
            printf("Player 1 enter a number between 1 and 100:   ");
            scanf("%d", &num);
            }
        else if(num<0){
            printf("Player 1 enter a number between 1 and 100:   ");
            scanf("%d", &num);
        }
        else{ 
            break;
        }
        }while(num);
        system("cls");
        printf("\n\nGuess My Number Game\n\n");
        
        printf("Enter a guess between 1 and 100:   ");
        printf("\n\nThe current bounds are %d and %d\n\n", downer, higher);       
        scanf("%d", &guess);
        tries++;

        if (guess > num){
            printf("Too high\n\n");
            higher = guess;

        }
        else if (guess < num){
            printf("Too low\n\n");
            downer = guess;

        }
        else if (tries == 15){
            printf("Sorry, you ran out of guesses\n the number was %d", num);
            exit(0);
        }
        
        else{
            printf("\nCorrect! You got it in %d guesses!\n", tries);
            int tries = 0;
            printf("Would you like to play again? [y/n]");
            scanf("%s", exits);
            
            if (strcmp(exits,yepper) == 0){
                printf("Ok, Player 1 get ready\n\n\n");
                int downer = 0;
                int higher = 0;
                continue;

            }
            else(strcmp(exits,natta) == 0);{
                printf("Goodbye! Thanks for playing");
                exit(0);  
            }   
        }
        } while(exiting);     
    return 0;
}