#include <stdio.h>
#include <string.h>

int main()
{
  	char Str1[100], Str2[100];
  	int finished, i;
 
  	printf("\n Please Enter the First String : \n ");
  	fgets(Str1,100,stdin);
  	
  	printf("\n Please Enter the Second String : \n ");
  	fgets(Str2,100,stdin);
  	
  	for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
		   
  	if(Str1[i] < Str2[i])
   	{
   		printf("\n str1 is less than str2\n");
	}
	else if(Str1[i] > Str2[i])
   	{
   		printf("\n str2 is less than str1\n");
	}
	else
   	{
   		printf("\n str1 is equal to str2\n");
	}
  	
  	return 0;
}
//STRING COMPARE FOR TEH WIN!! Better way is to use strcmp