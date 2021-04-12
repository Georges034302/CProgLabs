#!/bin/bash

gcc -Wall $1 $2 -lm -o $3

./$3

echo
