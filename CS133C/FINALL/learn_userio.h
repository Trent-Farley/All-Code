#include <stdio.h>
#include <stdlib.h>

int learn_userio(){
    printf("User I/O is a bit tricky in C. Coming from Python, I instantly \n\
to reach for an easy input() function, but C has many option. First off scanf() \n\
lets see how that goes...");
    long demo;
    printf("Please type a number\n\n ::");
    scanf("%d", &demo);
    system("@clear||cls");
    printf("This is the number you entered:\n\n :: %lld", &demo);
    printf("Press anything to continue");
    getchar(); getchar();
    system("@clear||cls");
    printf("All this: \n\
int demo;\n\
printf(""Please type a number"");\n\
scanf(""d"", &demo);\n\
system(""@clear||cls"");\n\
printf(""This is the number you entered: prcntd "", &demo);\n\
Just to get 1 number, that doesnt include all of the sillyness of what to use\n\
to get the actual string,char,long decimal, decimal... that MUST be specified \n\
before it is scanned into a variable. All of this however is what makes C so fast.\n\n\n ");
    getchar();
    return 0;
}