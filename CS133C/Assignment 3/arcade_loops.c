#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
int main(void)
{
    
    int coupons;
    int bars=0;
    int gumballs=0;
    printf("How many coupons\n");
    scanf(" %d", &coupons);
    do{
        bars = bars+1;
        coupons = coupons-10;   

    }while(coupons>9);
   
   
    do{  
        gumballs = gumballs+1;
        coupons = coupons - 3;
        
    }
    while(coupons>2);

    printf("candy bars is %d\n",bars);
    printf("gumballs is %d\n",gumballs);
    printf("Remaining coupons is %d\n", coupons);
}