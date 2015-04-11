/* test_say_hello.c

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


#include "cheat.h"
#include "cheats.h"
#include "say_hello.h"

CHEAT_TEST(greeting_works,
       cheat_assert_string("Hello Mariano", say_hello("Mariano"));
)
