#include<stdio.h>   
#include<string.h> 
#include<stdlib.h>
#include <ctype.h>
char hang_word[100],temp_word[100], exit_word[1];
void show_hang(int);
int main_super_game();
int starting_game();
int exit_the_game();
int main()

{
    do{
        starting_game();
        main_super_game();
        exit_the_game();
    }while(1);
    return 0;

}
int starting_game()
{
    system("clear");                              
    printf("\n\n Enter any word in lower case and hit >>ENTER<<");
    printf("\n\n\t :: ");
    scanf("%s",hang_word);                
    system("clear");                                            
    printf("\n\n Now for the other player:");
    printf("\n\n\tHIT >>ENTER<<");
    getchar();                                
    int length = strlen(hang_word);         

    system("clear");
    printf("\n\n !!!Welcome to the HANGMAN game!!!\n\n\n");  
    printf("\n\n You will get 5 chances to guess the right word");
    printf("\n\n\tHIT >>ENTER<< ");
          
    return 0; 
}

int main_super_game()
{
           
    char hang_out[100];                    
    int wrong_try = 6 , match_found = 0;        
    int count = 0 , position = 0, winner, length , i;
    char user_let;

    while(strcmp(exit_word,"n")!=0){
                               
        int length = strlen(hang_word);         

        system("clear");

            printf("\n\t||===== ");               
            printf("\n\t||    | ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            printf("\n\t||      ");

        printf("\n\n The word has %d letters \n\n",length); 
        for( i = 0; i < length ; i++)
        {
            hang_out[i] = '_';
            hang_out[length] = '\0';
        }

        for(i = 0 ; i < length ; i++)
        {
            printf(" ");
            printf("%c",hang_out[i]);        
        }
        while(wrong_try != 0)                     
        {
            match_found = 0;
            printf("\n\n   enter any letter from a to z and please use lower case!!");
            printf("\n\n\t :: ");

            fflush(stdin);

            scanf("%c",&user_let);          
        if(user_let < 'a' || user_let > 'z') 
        {
            system("clear");
            printf("\n\n\t Wrong input");
            match_found = 2;
        }
        fflush(stdin);
        if (match_found != 2)
        {
            for(count=0;count<length;count++) 
            {
                if(user_let==hang_word[count])
                {
                match_found = 1;
                }
            }

        if(match_found == 0)                   
            {
                printf("\n\t :( You have %d tries left ",--wrong_try);
                getchar();
                show_hang(wrong_try);
                getchar();
            }

        else
        {
            for(count = 0; count < length; count++)
                {
                    match_found = 0;
                    if(user_let == hang_word[count])
                {
                    position = count ;
                    match_found = 1;
                }
                if(match_found == 1)
                {
                    for(i = 0 ; i < length ; i++)
                    {
                        if( i == position)
                        {
                            hang_out[i] = user_let;
                        }
                        else if( hang_out[i] >= 'a' && hang_out[i] <= 'z' ) 
                        {
                            continue;
                        }

                        else
                        {
                            hang_out[i] = '_';         
                        }
                    }
                temp_word[position] = user_let;     
                temp_word[length] = '\0';                   
                    winner = strcmp(temp_word,hang_word);   

                    if(winner == 0)                     
                    {
                        printf("\n\n\t \t You won");
                        printf("\n\n\t The word was %s \n ",hang_word);
                        
                        return 0;
                    }
                }
                }
        }
        
        }
        

        printf("\n\n\t");
        for(i = 0 ; i < length ; i++)
        {
            printf(" ");
            printf("%c",hang_out[i]);            
        }

        getchar();
        }

        if(wrong_try <= 0)                           
        {
            printf("\n\n\t The word was %s ", hang_word);
            printf("\n\n\t Better luck next time \n");
        }
        getchar();

        printf("%s",exit_word);

        return 0;
    }
    return 0;
}

int exit_the_game()
{
    char exiting;
    printf(".\n\n\n Would you like to exit [y/n]\n\n\n :::   ");
    getchar();
    
    exiting = getchar();
    toupper(exiting);
    if(strcmp(&exiting, "y") == 0)
    {
        (exit(0));
    }

    return 0;
    
}




void show_hang(int choice)                          
{

     switch(choice)
    {

    case 0:
        system("clear");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/",'\\');
        printf("\n\t||    | ");
        printf("\n\t||   / %c",'\\');
        printf("\n\t||      ");
	break;
    
    case 1:
        system("clear");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/",'\\');
        printf("\n\t||    | ");
        printf("\n\t||     %c",'\\');
        printf("\n\t||      ");
	break;
    
    case 2:
        system("clear");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/",'\\');
        printf("\n\t||    | ");
        printf("\n\t||      ");
        printf("\n\t||      ");
	break;
    
    case 3:
        system("clear");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/",'\\');
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
	break;
    
    case 4:
        system("clear");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO ",'\\');
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
	break;
    
    case 5:
        system("clear");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||    O ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
	break;
    }
      return;
}