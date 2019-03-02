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
                printf("Enter an X value of the board\n");
                scanf("%d",&x);
                printf("Enter a y value of the board\n");
                scanf("%d",&y);
            }
            else{
                placing = 'O';
                printf("Enter an X value of the board\n");
                scanf("%d",&x);
                printf("Enter a y value of the board\n");
                scanf("%d",&y);
            }

            int position = (x-1)+((y-1)*3);
            if(board[position]==' '){
                board[position] = placing;
            }
            else{
                printf("Please select a valid square.\n");
                i--;
            }
           
            printf("Updated board:\n\n\
            1  |  2  |  3\n\
        1   %c  |  %c  |  %c\n\
        -------|-----|-------\n\
        2   %c  |  %c  |  %c\n\
        -------|-----|-------\n\
        3   %c  |  %c  |  %c\n\n",
        board[0],board[1],board[2],
        board[3],board[4],board[5],
        board[6],board[7],board[8]);
        int j = 0;
        int count = 0;
            for(j<3; j++;)
            {
                if( board[count+0] = board[count+1] && board[count+2] ==board[count+2] \
                && board[count+2] && board[count+0]==placing){
                    printf("%c's have won \n\n",placing);
                    i = 10;
                }

                else if(board[j+0]==board[j+3]&& board[j+3]==board[j+6]&&board[j+0]==placing){
                    printf("%c's have won \n\n",placing);
                    i = 10;
                }
                //j = j+3;
            }

            // if(board[0]==board[1]&&board[1]==board[2]&&board[0]==placing){
            //     printf("%c's have won!!!\n",placing);
            //     i=10;
            // }
            // else if(board[3]==board[4]&&board[4]==board[5]&&board[3]==placing){
            //     printf("%c's have won!!!\n",placing);
            //     i=10;
            // }
            // else if(board[6]==board[7]&&board[7]==board[8]&&board[6]==placing){
            //     printf("%c's have won!!!\n",placing);
            //     i=10;
            // }
            // else if(board[0]==board[3]&&board[3]==board[6]&&board[0]==placing){
            //     printf("%c's have won!!!\n",placing);
            //     i=10;
            // }
            // else if(board[1]==board[4]&&board[4]==board[7]&&board[1]==placing){
            //     printf("%c's have won!!!\n",placing);
            //     i=10;
            // }
            // else if(board[2]==board[5]&&board[5]==board[8]&&board[22]==placing){
            //     printf("%c's have won!!!\n",placing);
            //     i=10;
            // }
            // else if(board[0]==board[4]&&board[4]==board[8]&&board[0]==placing){
            //     printf("%c's have won!!!\n",placing);
            //     i=10;
            // }
            // else if(board[6]==board[4]&&board[4]==board[2]&&board[6]==placing){
            //     printf("%c's have won!!!\n",placing);
            //     i=10;
            // }
        }
    printf("Would you like to play again?[y=1/n=0]\n");
    scanf("%d",&playing);
    }
}