#include <stdio.h>
#include <stdlib.h>
void print_stats(char tic[3][3]);
int check_win(char tic[3][3],char place,int i);

void main(){
    char tic[3][3];
    char place;
    int x,y,i;
    int playing = 1;

    while(playing == 1){
        for(i=0;i<3;i++){
            tic[i][0]=' ';
            tic[i][1]=' ';
            tic[i][2]=' ';
        }

        print_stats(tic);

        printf("Player 1 is X, Player 2 is O.\n");

        for(i=0;i<9;i++){

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
            
            if(tic[y-1][x-1]==' '){
                tic[y-1][x-1] = place;
            }
            else{
                printf("Please select a valid square.\n");
                i--;
            }
            
            print_stats(tic);

            int won = check_win(tic,place,i);
            if(won==1){
                break;
            }
        }
    printf("Would you like to play again?[y=1/n=0]\n");
    scanf("%d",&playing);
    system("@cls||clear");
    }
}

void print_stats(char tic[3][3]){
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
    for(i=0;i<3;i++){
        if(tic[i][0]==tic[i][1]&&\
        tic[i][1]==tic[i][2]&&\
        tic[i][0]==place){
            printf("%c's Win!!!\n", place);
            return 1;
        }
        else if(tic[0][i]==tic[1][i]&&\
        tic[1][i]==tic[2][i]&&\
        tic[0][i]==place){
            printf("%c's Win!!!\n", place);
            return 1;
        }
        }
        if(tic[0][0]==tic[1][1]&&tic[1][1]==tic[2][2]&&tic[0][0]==place){
            printf("%c's Win!!!\n", place);
            return 1;
        }
        else if(tic[2][0]==tic[1][1]&&tic[1][1]==tic[0][2]&&tic[2][0]==place){
            printf("%c's Win!!!\n", place);
            return 1;
        }
}