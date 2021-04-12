#!/bin/bash

gcc -Wall -ansi $1 $2 -lm -o $3

./$3

echo
