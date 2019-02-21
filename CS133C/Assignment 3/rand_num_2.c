#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
   int n;
   int max_num;
   int min_num;
//(max_number + 1 - minimum_number) + minimum_number
   
   n = 5;
   printf("\nPlease enter the higher number:\n");
   scanf("%d", &max_num);
   printf("\nPlease enter the lower number:\n");
   scanf("%d", &min_num);
   srand((unsigned) time(0));

   for(int i = 0 ; i < n ; i++ ) {
      printf("A random number between those values is: \
%d\n", rand()%(max_num+1-min_num)+min_num);
   }
   
   return(0);
}