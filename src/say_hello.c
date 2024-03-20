/* say_hello.c

   Copyright (C) 2015-2024 Mariano Ruiz <mrsarm@gmail.com>
   This file is part of the helloworld C-project.

   The "helloworld C-project" is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 3 of the License, or (at your option) any later version.

   The project is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the "helloworld C-project" project; if not, see
   <http://www.gnu.org/licenses/>.  */


#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "say_hello.h"

const char * HELLO = "Hello";

/**
 * Return a greeting message "Hello <name>" if name is not empty or null,
 * otherwise just "Hello".
 * @param name string with the name
 * @return a string with the greeting message
 */
char *say_hello(const char *name) {
    if (name != NULL && strlen(name) > 0) {
        char *hello = (char *) malloc(strlen(HELLO) + strlen(name) + 1);
        strcpy(hello, HELLO);
        strcat(hello, " ");
        strcat(hello, name);
        return hello;
    }
    return strcpy((char *) malloc(strlen(HELLO) + 1), HELLO);
}
