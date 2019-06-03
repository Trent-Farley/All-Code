#include<stdio.h>   
#include<string.h> 
#include<stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int exit_the_game();

void main(){
    /* tic is the board (1 dimensional), place is 
    equivalent to position. x,y are all for counting
    */
    int playing = 1;
    char tic[9];
    char place;
    int x,y,i;
    
    while(playing == 1){
    
    /*
    will stay true b/c of exit_the_game function which will end 
    the program when user says so. 
    */
    
        for(i=0;i<9;i++){
            tic[i]=' ';
        }
        /*
        Probably should have stuck this in a function...
        */
        printf("State of the game:\n\n\
            1  |  2  |  3\n\
        1   %c  |  %c  |  %c\n\
        -------|-----|-------\n\
        2   %c  |  %c  |  %c\n\
        -------|-----|-------\n\
        3   %c  |  %c  |  %c\n\n",
        tic[0],tic[1],tic[2],
        tic[3],tic[4],tic[5],
        tic[6],tic[7],tic[8]);

        printf("Player 1 is X, Player 2 is O.\n");
        //Actual game play 
        for(i=0;i<9;i++){
            //mod to test who is placing
            if(i%2==0){
                place = 'X';
                printf("Enter an X value of the tic Player 1:\n");
                scanf("%d",&x);
                printf("Enter a y value of the tic\n");
                scanf("%d",&y);
            }
            else{
                place = 'O';
                printf("Enter an X value of the tic Player 2:\n");
                scanf("%d",&x);
                printf("Enter a y value of the tic:\n");
                scanf("%d",&y);
            }
            //Secret formula for finding position == heard from Alex
            int position = (x-1)+((y-1)*3);
            if(tic[position]==' '){
                tic[position] = place;
            }
            //error checking
            else{
                printf("Please select a valid square.\n");
                i--;
            }
          //again should have put into function  
            printf("Updated tic:\n\n\
            1  |  2  |  3\n\
        1   %c  |  %c  |  %c\n\
        -------|-----|-------\n\
        2   %c  |  %c  |  %c\n\
        -------|-----|-------\n\
        3   %c  |  %c  |  %c\n\n",
        tic[0],tic[1],tic[2],
        tic[3],tic[4],tic[5],
        tic[6],tic[7],tic[8]);
        int count = 0;
        //win logic j for columns and count for rows. 
        for(int j=0;j<3; j++){
                if( tic[count+0] == tic[count+1] && tic[count+1] ==tic[count+2] \
                && tic[count+0]==place){
                    printf("%c's have won \n\n",place);
                    i = 12;
                }
                else if(tic[j+0]==tic[j+3]&& tic[j+3]==tic[j+6]&&tic[j+0]==place){
                    printf("%c's have won \n\n",place);
                    i = 12;
                }
                count+=3;
        }
        //diagonal win logic
        if(tic[0]==tic[4]&&tic[4]==tic[8]&&tic[0]==place){
            printf("%c's have won!!!\n",place);
            i =12;
        }
        if(tic[6]==tic[4]&&tic[4]==tic[2]&&tic[6]==place){
            printf("%c's have won!!!\n",place);
            i = 12;
        }
        
        }
        printf("Would you like to play again? [y=1,n=0]\n\n::  ");
        getchar();
        scanf("%d",&playing);
        
    }
}


