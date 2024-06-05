#include <stdio.h>
#include "adder/adder.h"

int main() {
    printf("Hello, World!\n");

    int a = 2;
    int b = 4;
    int result;
    

    add(a, b, &result);
    printf("The result is: %d\n", result);

    return 0;
}

