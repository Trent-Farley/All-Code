#include<stdio.h>   
#include<string.h> 
#include<stdlib.h>
#include <ctype.h>
#include <stdbool.h>
int check_win(char *tic,char place,int i);
int exit_the_game(char*(tic));
//for exiting the game, yes I did copy it from the last one
void print_stats(char*(tic));

void main(){
    char* tic;
    char place;
    int x,y,i,position;
    //create allocation for the size of 9 
    tic = calloc(9, sizeof(char));

    while(true){
        //True b/c I have an exit function to end the while loop
        for(i=0;i<9;i++){
            //super easy way of doing things... love me 
            //some dynamic memory!
            *(tic+i)=' ';
        }
        print_stats((tic));//print board
        printf("Player 1 is X, Player 2 is O.\n");

        for(i=0;i<9;i++){
            //mod to check who is currently playing
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
            //super secret formula for the W
            int position = (x-1)+((y-1)*3);
            if(*(tic+position)==' '){
                *(tic+position) = place;
            }
            else{
                printf("Please select a valid square.\n");
                i--;//error checking
            }
            check_win((tic),place,i);
            
            print_stats((tic));


        }
    }
}
void print_stats(char*(tic)){
    /* Prints the stats of the game */
        printf("State of the game:\n\n\
            1  |  2  |  3\n\
        1   %c  |  %c  |  %c\n\
        -------|-----|-------\n\
        2   %c  |  %c  |  %c\n\
        -------|-----|-------\n\
        3   %c  |  %c  |  %c\n\n",
        *(tic+0),*(tic+1),*(tic+2),
        *(tic+3),*(tic+4),*(tic+5),
        *(tic+6),*(tic+7),*(tic+8));
}

int check_win(char *tic,char place,int i){
    //win logic except easier since there is 
    //information more easily accessed. 
    int count = 0;
    //win logic j for columns and count for rows. 
    for(int j=0;j<3; j++){
            if( tic[count+0] == tic[count+1] && tic[count+1] ==tic[count+2] \
            && tic[count+0]==place){
                printf("%c's have won \n\n",place);
                exit_the_game((tic));
            }
            else if(tic[j+0]==tic[j+3]&& tic[j+3]==tic[j+6]&&tic[j+0]==place){
                printf("%c's have won \n\n",place);
                exit_the_game((tic));
            }
            count+=3;
    }
    //diagonal win logic
    if(tic[0]==tic[4]&&tic[4]==tic[8]&&tic[0]==place){
        printf("%c's have won!!!\n",place);
        exit_the_game((tic));
        
    }
    if(tic[6]==tic[4]&&tic[4]==tic[2]&&tic[6]==place){
        printf("%c's have won!!!\n",place);
        exit_the_game((tic));
    }
}
int exit_the_game(char*(tic))
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
        free(tic);
        (exit(0));

    }
    return 0;  
}