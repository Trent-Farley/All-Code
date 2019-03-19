#include <stdio.h>
#include <stdlib.h>


int learn_fileio(){
    printf("Check this folder to read the new file and all of its contents :)");
    FILE *fp;
    fp = fopen("./Welcome2c.txt","w");
    fprintf(fp, "File I/o is a lot like user i/o. \n\
by using fprintf you are able to write to a file, with the options\n\
reading, writing, and append. You can also do combinations of all of them. \n\
To read from a file, just use fgets(variable, length of string, file location)\n\
thats it. Here is the code\n\n\n\
    FILE *fp;\n\
    fp = fopen(file,writing);\n\
    fprintf(whatever you want to say);\n\
    fclose(fp);");
    
    fclose(fp);
    printf("Press any key to return to menu");
    getchar();
    return 0;
}