//
// Created by user on 26/03/15.
//

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "say_hello.h"

char *say_hello(char *name) {
    char* hello_pre = "Hello ";
    char* hello = (char*) malloc(strlen(hello_pre) + strlen(name) + 1);
    strcpy(hello, hello_pre);
    strcat(hello, name);
    return hello;
}
