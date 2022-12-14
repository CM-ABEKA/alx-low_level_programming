#!/bin/bash
gcc -Werror -Wall -Wextra -fPIC -c *.c
gcc -shared -o liball.so *.o
