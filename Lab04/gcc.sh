#!/bin/bash

gcc -Wall -Werror $1 $2 -lm -o $3

./$3

echo
