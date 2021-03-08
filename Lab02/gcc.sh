#!/bin/bash

gcc -Wall -Werror -o $2 $1 -lm

./$2

echo
