#!/bin/bash

gcc -Wall -ansi $1 -lm -o $2

./$2
