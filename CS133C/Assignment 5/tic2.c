#include<stdio.h>   
#include<string.h> 
#include<stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int exit_the_game();
//for exiting the game, yes I did copy it from the last one
void print_stats(char tic[3][3]);
// finally put the board printing into its own function
int check_win(char tic[3][3],char place,int i);
// check win is all the win logic.

void main(){
    char tic[3][3];
    char place;
    int x,y,i;
    // tic is a 2 dimensional array, place is postion and x,y,i are 
    // counting variables.
    while(true){
        //creation of the two dimmensional array.
        for(i=0;i<3;i++){
            tic[i][0]=' ';
            tic[i][1]=' ';
            tic[i][2]=' ';
        }

        print_stats(tic);

        printf("Player 1 is X, Player 2 is O.\n");

        for(i=0;i<9;i++){
            //more mod fun!
            if(i%2==0){
                place = 'X';
                printf("Player 1 please enter a x coordinate to place a X\n");
                scanf("%d",&x);
                printf("Player 1 enter a y coordinate\n");
                scanf("%d",&y);
                system("@cls||clear");
            }
            else{
                place = 'O';
                printf("Player 2 please enter a x coordinate to place a X\n");
                scanf("%d",&x);
                printf("Player 2 enter a y coordinate\n");
                scanf("%d",&y);
                system("@cls||clear");
            }
            // the super secret formula 
            if(tic[y-1][x-1]==' '){
                tic[y-1][x-1] = place;
            }
            else{
                printf("Please select a valid square.\n");
                i--;
            }
            //error checking and status 
            print_stats(tic);

            check_win(tic,place,i);
        }
    system("@cls||clear");
    }
}

void print_stats(char tic[3][3]){
    /* Print board */
        printf("Current tic\n\n\
        1  |  2  |  3\n\
    1   %c  |  %c  |  %c\n\
    -------|-----|-------\n\
    2   %c  |  %c  |  %c\n\
    -------|-----|-------\n\
    3   %c  |  %c  |  %c\n\n",
    tic[0][0],tic[0][1],tic[0][2],
    tic[1][0],tic[1][1],tic[1][2],
    tic[2][0],tic[2][1],tic[2][2]);
}

int check_win(char tic[3][3],char place,int i){
    //win logic except easier since there is 
    //information more easily accessed. 
    for(i=0;i<3;i++){
        if(tic[i][0]==tic[i][1]&&\
        tic[i][1]==tic[i][2]&&\
        tic[i][0]==place){
            printf("%c's win!!!\n", place);
            exit_the_game();
        }
        else if(tic[0][i]==tic[1][i]&&\
        tic[1][i]==tic[2][i]&&\
        tic[0][i]==place){
            printf("%c's win!!!\n", place);
            exit_the_game();
        }
        }
        if(tic[0][0]==tic[1][1]&&tic[1][1]==tic[2][2]&&tic[0][0]==place){
            printf("%c's win!!!\n", place);
            exit_the_game(); 
        }
        else if(tic[2][0]==tic[1][1]&&tic[1][1]==tic[0][2]&&tic[2][0]==place){
            printf("%c's win!!!\n", place);
            exit_the_game();
        }
}
int exit_the_game()
// Function to end the game
{
    char exiting;
    printf("\n\n Would you like to exit [y/n] \n :::  ");
    getchar();//buffer eater
    scanf("%c",&exiting);
 
    toupper(exiting);
    // So it doesnt print this, but for some reason is required 
    // for exiting. 
    printf("%s",exiting);

    if(strcmp(&exiting, "Y") == 0)
    {
        exit(0);
    }
    return 0;  
}