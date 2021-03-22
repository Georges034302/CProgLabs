#ifndef UTIL_FUNC
#define UTIL_FUNC
 
#include<stdio.h>
#include<stdbool.h>

//read integer function
int readInt(char[]);

//read a string from user input
char *readString(char[]);

//create a random array of size 'n' and seed 'seed'
int *randomize(int,int);

//use recursion to calculate the factorial of 'n'
int factorial(int);

//Show the factorial series of a random array
void factorialSeries();

//Linear search for element 'e' in a random array of size 'n'
void linear();

//login test if user is George and password is pass
bool login(char [],char[]);

//verify the logged in user if it was George
void welcome();

//Test if a string is a palindrome
//If not print the string in reverse order
void palindrome();

#endif /*UTIL_FUNC*/







