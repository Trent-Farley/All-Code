#include <stdio.h>
#include <stdlib.h>


int pointer_and_array(){
    printf("Check out the pointer and arrays file in your directory\n\n");
    
    FILE *fp;
    fp = fopen("pointer.txt","w+");
    fprintf(fp, "Pointers are so cool in C. They are like the first gps first computers\n\
They specify exactly where the contents of a variable is. Instead of storing the \n\
variable, it stroe the memory location which leads the CPU to its destination. \n\
Pointers are defined as follows:\n\
    char car [10] = hello\n\
    char* pointer;\n\
    pointer = car \n\n\
address will lead exactly to the array of characters that spell hello. These can also be \n\
dynamic, so you can make a pointer by just allocating space with calloc and or malloc. "); 
    fclose(fp);
    fp = fopen("arrays","w");
    fprintf(fp, "Arrays in C are a lot like arrays in other languages, but in c they \n\
are mainly used to hold strings. Since C has no 'string' type, but has a way to print\n\
and get strings, the best way to do it is to multply a char by an array lenth to get \n\
memory large enough for your newly made string. Arrays can be indexed into, and can even\n\
be integers, pointers and any other type. For this class we used multi-dimmensional arrays\n\
to hold parts of strings. Creating these is like such:\n\
    char array[x][x] where x == int \n\
    int array[x][x]  ");
    fclose(fp);
    printf("Press any key to return to menu\n");
    getchar();
    getchar();
    return 0;

}