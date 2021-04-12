#ifndef UTIL_FUNC
#define UTIL_FUNC
#include "vars.h"
#include <stdio.h>
#include <stdbool.h>

//read an integer from user-input
int readInt(char[]);

//create a random array of integers
int *randomArray(int,int,int);

//print array elements
void show(char*,int,int*);

//swap two integers in an array at index i and j
void swap(int*,int,int);

//Use bobblesort algorithm to sort an array of integers
void sort(int, int*);

#endif /*UTIL_FUNC*/

