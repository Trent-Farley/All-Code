#include <stdio.h>
#include <stdlib.h>

void main(){
    char tic[9];
    char place;
    int x,y,i;
    int playing = 1;

    while(playing == 1){
        for(i=0;i<9;i++){
            tic[i]=' ';
        }

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

        for(i=0;i<9;i++){

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

            int position = (x-1)+((y-1)*3);
            if(tic[position]==' '){
                tic[position] = place;
            }
            else{
                printf("Please select a valid square.\n");
                i--;
            }
            printf("Updated tic: \n\n");
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
        for(int j=0;j<3; j++){
                if( tic[count+0] == tic[count+1] && tic[count+1] ==tic[count+2] \
                && tic[count+0]==place){
                    printf("%c's have won \n\n",place);
                    i=10;
                }
                else if(tic[j+0]==tic[j+3]&& tic[j+3]==tic[j+6]&&tic[j+0]==place){
                    printf("%c's have won \n\n",place);
                    i=10;
                }
                count+=3;
        }
        if(tic[0]==tic[4]&&tic[4]==tic[8]&&tic[0]==place){
            printf("%c's have won!!!\n",place);
            i=10;
        }
        if(tic[6]==tic[4]&&tic[4]==tic[2]&&tic[6]==place){
            printf("%c's have won!!!\n",place);
            i=10;
        }
        }
        }
    printf("Would you like to play again?[y=1/n=0]\n");
    scanf("%d",&playing);
    }

