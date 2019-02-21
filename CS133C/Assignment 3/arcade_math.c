#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
int main(void)
{
    
    int coupons;
    int bars;
    int gumballs;
    printf("How many coupons\n");
    scanf(" %d", &coupons);
    bars = coupons / 10;
    coupons = coupons-(bars*10);
    gumballs = coupons/3;    
    printf("candy bars is %d\n",bars);
    printf("gumballs is %d\n",gumballs);
    printf("Remaining coupons is %d", coupons);

}