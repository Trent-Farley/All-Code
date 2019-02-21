/* 
Trent Farley
CS133C Winter
Datatypes.c ran in VSCODE
*/
#include <stdio.h>
#include <stdbool.h>


int main() 
{
    
    short y = 255;
    int  num = 21400000;
    long too_lon = 99999999;
    char chars = 'A';
    bool ean = true;
    float period = 3.14;
    double dd =3.14159;
	unsigned interesting = 0;
    printf("y: %d, sizeof y: %d bits\n", y, sizeof y * 8);
	printf("num: %d, sizeof num: %d in bytes\n", num, sizeof num);
	printf("too_lon: %lld, sizeof too_lon: %d in bytes\n",too_lon, sizeof too_lon);
	printf("chars: %c, sizeof chars: %d in bytes\n", chars, sizeof chars);
	printf("ean: %d, sizeof ean: %d in bytes\n", ean, sizeof ean);
	printf("period: %f, sizeof period: %d in bytes\n", period, sizeof period);
	printf("dd: %.15lf, sizeof dd: %d in bytes\n", dd, sizeof dd);
	printf("Unsigned interesting is: %d\n", interesting);
	if(ean) //== true not required
	{
		printf("ean is true\n");
	}
    return 0;

}