#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
   int number_of_times;

   
   number_of_times = 11;
   

   srand((unsigned) time(0));
   for(int i = 0 ; i < number_of_times ; i++ ) {
      printf("A random number is: %d\n", rand()%100);
   }
   //Tried keeping it a smaller number since the numbers were HUGE
   return(0);
}