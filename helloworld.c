//helloworld.c

#include <stdio.h>

#include "function.h"

int addition(int varA, int varB) {
    return varA + varB;
}

//main loop
int main() 
{
    printf("Hello World\n");

//local
    printf("local & direct calculation\n");
    printf("%d\n", addition(3, 8));

    int result;
    result = addition(3, 7);
    printf("local calculation\n");
    printf("%d\n", result);

//from .h file...
    printf("remote & direct calculation\n");
    printf("%d\n", function(12, 3));

    int result2;
    result2 = function(10, 3);
    printf("remote calculation\n");
    printf("%d\n", result2);

    return 0;
}


