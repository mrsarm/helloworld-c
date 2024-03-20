Hello World C-project
=====================

This is just a **"helloworld"** example project.

The only purpose of this project is to use as a scaffolding
C language project.

The project uses *CMakes* to build the executable, and *CHEAT* for
unit testing, that is downloaded from a remote repository the first
time the project tests are built.
It also has a [workflow](.github/workflows/cmake.yml) configured to
build and run the tests on GitHub Actions automatically on each
push of code.


Build and execute
-----------------

1. From the source directory, generate the "Makefile":

       $ cmake .

2. *Make* the project and generate the executable "helloworld".

       $ make

3. Then execute with:

       $ out/helloworld

4. To install the executable `helloworld`
   into `/usr/local/bin`:

       $ sudo make install

   To install into another folder, execute the step 1
   overwriting the `CMAKE_INSTALL_PREFIX` variable, eg.
   to install into `/usr/bin` folder:

       $ cmake -DCMAKE_INSTALL_PREFIX=/usr .

To clean the compiled binaries and compiled modules:

    $ make clean

To clean all compiled files and generated "Makefiles":

    $ make clean-all


Tests
-----

Tests are built with [CHEAT](https://github.com/Tuplanolla/cheat),
a unit testing framework for C/C++.

All of them can be executed with CMake CTest:

    $ make test

Or just:

    $ ctest

To run the tests and see all the output in the console (specially
if the tests fail), first build the project (`make`), and then execute:

    $ out/test_say_hello


About
-----

Source: https://github.com/mrsarm/helloworld

Authors: (2015-2024) Mariano Ruiz <mrsarm@gmail.cm>

License: LGPL-3
