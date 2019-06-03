#include <stdio.h>
#include <stdlib.h>


int learn_macros(){
    printf("C is a compiled language and macros like the \n\
#include <stdio.h> are preprocessed, before the c source code \n\
that a person writes. THis is why the compiler has some serios issues\n\
when functions are called without it having the preprocessors necessary. ");
    getchar();
    return 0;
}