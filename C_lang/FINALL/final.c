#include <stdio.h>
#include <stdlib.h>
#include "learn_fileio.h"
#include "learn_macros.h"
#include "learn_userio.h"
#include "learnsaf.h"
#include "learnpointers.h"

int fibbin();
int main(void){
    int exiting;
    printf("Welcome to....\n\n \
    LETS LEARN C!!");
    int choice = 52;
    do
    {
    printf("What would you like to learn?\n\
1. Macros \n\
2. User I/o\n\
3. file I/o\n\
4. structs and functions\n\
5. 1 d arrays 2 d array and pointers\n\
6. Recursion \n\
7. Thank you \n\n\
Press 0 to exit\n\n ::  "); 
        scanf("%d",&choice);
        if(choice ==1){
            learn_macros(); //Prints to console infromation about include statements
            printf("Just for kicks here is a for loop\n\n\
            int i = 3\n\
            for(i<3; i>0; i--)\n\
                {printf(""Youll find out"");\n\
            }");
            for(int i = 3; i >0; i--)
            {
               printf("\n\nhappy spring break!\n\n");//dont forget them newlines 
            }
            printf("\nHit any character to return\n");
            getchar();
            
        }
        else if (choice == 2){
            learn_userio(); //User i/o and its frustrating tendencies. 
        }
        else if (choice == 3){
            learn_fileio();//Barely touched on this, but I used it for final because 
            // it is so easy and makes everything A LOT nicer
            // puts information into a sepreate file
        }
        else if(choice == 4){
            learnstructsafunc(); //Structs, didnt touch on functions as well, but 
            // I did learn a lot about how they really work compared to other languages
            // puts information into a file to clear up the command line
        }
        else if(choice ==5){
            pointer_and_array(); //My favorite otherwise known as losing against myself
            //at tic-tac-toe. I hope I covered this enough, but it made sense in my mind.
            //Also outputs info into a seperate file to clear up the command line
        }
        else if(choice == 6){
            fibbin();//This function is down below, followed a quick tutorial on how to do it
            // Im not a big fun of fibbinocci, but man it is so fascinating
        }
        else if(choice == 7){
            printf("Just wanted to say thank you for everything you have done \n\
this term and all the hours you have put in to further our class's education. ");  

        // Spent more time on this code than my discrete math final oops...
        // Thank you again. 
        }
        
        else
        {
            exiting = choice;
            //GET OUT!! (:
        }
        
    } while ( exiting != 0);
    //Oh do/ while loops you are weird. One thing I did not add is a for loop. -- I got it
    }

int fibbin(){
    printf("\n\nLets do some fibonnaci!!\n\n");
    int fib1 = 0;
    int fib2 = 1;
    int fib3, num, count = 0;
 
    printf("Enter a number \n");
    scanf("%d", &num);//int size restriction
    printf("First %d fibbin numbers are ...\n", num);
    printf("%d\n", fib1);
    printf("%d\n", fib2);
    count = 2; 
    while (count < num)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d\n", fib3);
        fib1 = fib2;
        fib2 = fib3;
   }
    printf("The fibinnaci sequence is perfect for recursion, can be solved \n\
inductively and will always be proven tue. \n\n Hit any key to return");
    getchar();
    getchar();
    return 0;
}







