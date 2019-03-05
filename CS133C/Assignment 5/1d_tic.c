#include <stdio.h>


void main(){
    char board[9];
    char placing;
    int x,y,i;
    int playing = 1;

    while(playing == 1){
        for(i=0;i<9;i++){
            board[i]=' ';
        }

        printf("State of the game:\n\n\
            1  |  2  |  3\n\
        1   %c  |  %c  |  %c\n\
        -------|-----|-------\n\
        2   %c  |  %c  |  %c\n\
        -------|-----|-------\n\
        3   %c  |  %c  |  %c\n\n",
        board[0],board[1],board[2],
        board[3],board[4],board[5],
        board[6],board[7],board[8]);

        printf("Player 1 is X, Player 2 is O.\n");

        for(i=0;i<9;i++){

            if(i%2==0){
                placing = 'X';
                printf("Player 1 please enter a coordinate to place a X\n");
                scanf("%d%d",&x,&y);
            }
            else{
                placing = 'O';
                printf("Player 2 please enter a coordinate to place a Y\n");
                scanf("%d%d",&x,&y);

            }

            int position = (x-1)+((y-1)*3);
            if(board[position]==' '){
                board[position] = placing;
            }
            else{
                printf("Please select a valid square.\n");
                i--;
            }
            
            printf("Updated state of the game:\n\n\
            1  |  2  |  3\n\
        1   %c  |  %c  |  %c\n\
        -------|-----|-------\n\
        2   %c  |  %c  |  %c\n\
        -------|-----|-------\n\
        3   %c  |  %c  |  %c\n\n",
        board[0],board[1],board[2],
        board[3],board[4],board[5],
        board[6],board[7],board[8]);
        

        for(i=0;i<9,i++);

            if(board[0]==board[1]&&board[1]==board[2]&&board[0]==placing){
                printf("%c's have won!!!\n",placing);
                i=10;
            }
            else if(board[3]==board[4]&&board[4]==board[5]&&board[3]==placing){
                printf("%c's have won!!!\n",placing);
                i=10;
            }
            else if(board[6]==board[7]&&board[7]==board[8]&&board[6]==placing){
                printf("%c's have won!!!\n",placing);
                i=10;
            }
            else if(board[0]==board[3]&&board[3]==board[6]&&board[0]==placing){
                printf("%c's have won!!!\n",placing);
                i=10;
            }
            else if(board[1]==board[4]&&board[4]==board[7]&&board[1]==placing){
                printf("%c's have won!!!\n",placing);
                i=10;
            }
            else if(board[2]==board[5]&&board[5]==board[8]&&board[22]==placing){
                printf("%c's have won!!!\n",placing);
                i=10;
            }
            else if(board[0]==board[4]&&board[4]==board[8]&&board[0]==placing){
                printf("%c's have won!!!\n",placing);
                i=10;
            }
            else if(board[6]==board[4]&&board[4]==board[2]&&board[6]==placing){
                printf("%c's have won!!!\n",placing);
                i=10;
            }
        }
    printf("Would you like to play again?[y=1/n=0]\n");
    scanf("%d",&playing);
    }
}