#include <stdio.h>
#include <stdlib.h>

#include "say_hello.h"


int main() {
    char str[100];
    printf("Your name: ");
    char* hello = say_hello(fgets(str, 99, stdin));
    printf("> %s", hello);
    free(hello);
    return 0;
}
