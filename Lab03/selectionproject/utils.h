#ifndef UTIL_FUNC
#define UTIL_FUNC

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include <stdlib.h>

//read a double value with prompt
double read(char[]);

//read a char value with prompt
char readChar(char []);

//Determine the grades of a student based on their mark
void grades();

//Count the number of vowels until user enters .
void countVowels();

//Determine the longest dry spell until user enters -1
void drySpell();

//Calculate the factorial of n
void factorial();

//Read an integer between 0 and 100 until -1
//Show the frequency of integers in each group: 0-9, 10-19, 20-29, 30-39, ..., 90-99.
void frequency();

//Determine the random location (x,y) of a car in a quadrant 100x100 [50x50x50x50]
//RAND_MAX is 32767
void position();

//Populate an array of size with random integers 
//RAND_MAX is 32767
void randomize();

#endif /*UTIL_FUNC*/

