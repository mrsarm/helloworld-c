/* say_hello.cpp

   Copyright (C) 2015 Mariano Ruiz <mrsarm@gmail.com>
   This file is part of the helloworld C-project.

   The helloworld C-project is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */


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