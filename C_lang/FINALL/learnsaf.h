#include <stdio.h>
#include <stdlib.h>


int learnstructsafunc(){
    printf("Check this folder to read the new file and all of its contents :)\n\n");
    FILE *fp;
    fp = fopen("Structs.txt","w+");
    fprintf(fp, "A struct in the C programming language (and many derivatives) is \n \
a composite data type (or record) declaration that defines \n\
a physically grouped list of variables to be placed under one name in a block of\n \
"); 
    fputs("memory, allowing the different variables to be accessed via a single pointer, or \n \
the struct declared name which returns the same address. (Wikipedia) \n \
Structs are created like such:\n\n \
    struct variable = {  \n \
        any function/variables that you would like to be defined in one\n \
        group of memory.\n\
   } variable \n\n \
variable.function can call the function defined in the struct to be used \n \
for outside uses. Putting a struct in a struct is pretty simple and can be \n\
called just like the first one, bu saying variable.variable.attribute example\n\n\
    struct airport {\n\
        struct terminal{\n\
            int people\n\
        }term\n\
        int planes\n\
        }port;\n\
    port.term.people = 52;\n\
    port.planes=6;" ,fp);
        struct airport
    {
        struct terminal{
            int people;
        }term;
        int planes;   
    }port;

    port.term.people = 52;
    port.planes = 6;
    fprintf(fp, "\n\nInside a terminal struct inside an airport struct and there are %d \n\
people in the terminal and %d planes",port.term.people, port.planes);
    fclose(fp);
    fp = fopen("function.txt", "w");
    fprintf(fp,"Function in C are not even an option, you must have a main() to even\n\
    start coding. Functions can have different types, just like variables. THey can be \n\
    an integer, so they must return a number, they can be void so they dont have to return\n\
    anything and they can also be a char so they return a character/string. ");
    fclose(fp);

    printf("\n\nPress any key to return to menu");
    getchar();
    getchar();
    return 0;

}
