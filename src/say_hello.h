/* say_hello.h

   Copyright (C) 2015-2022 Mariano Ruiz <mrsarm@gmail.com>
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


#ifndef _HELLOWORLD_SAY_HELLO_H_
#define _HELLOWORLD_SAY_HELLO_H_

/**
 * Return a greeting message "Hello <name>" if name is not empty or null,
 * otherwise just "Hello".
 * @param name string with the name
 * @return a string with the greeting message
 */
char* say_hello(const char *);

#endif //_HELLOWORLD_SAY_HELLO_H_
