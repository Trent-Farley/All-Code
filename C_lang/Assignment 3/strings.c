#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str[100]; /* Declares a string of size 100 */
    int l,i;

    printf("Input the string\n\n");
    fgets(str, sizeof str, stdin);
    l=strlen(str);
    printf("\nThe characters of the string in reverse are:");
    for(i=l;i>=0;i--)
    {
        printf("\n%c", str[i]);
    }
    printf("\nThe characters of the string in normal order is:\n");
    for(i=0;i<=l+1;i++)
    {
        printf("\n%c", str[i]);
    }
        
    printf("\n");
}