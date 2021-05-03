#ifndef UTIL_FUNC
#define UTIL_FUNC
#include "vars.h"
#include <stdio.h>

//insert a card [number-name->next] at the begining of the list
void push(Node **, int,char*);

//insert a card [number-name->next] at the end of the list
void append(Node **, int, char*);

//generate a linkedlist of cards [number-name]: number [3 digits] and name [read from file]
void createList(Node **);

//add a mask to the encrypted ID
char *mask(int, int);

//print the linked list
void printList(Node**);

//free the linked list 
void freeList(Node**);

//encrypt the original file
void encryptFile();

//decrypte a compressed file
void decryptFile();

void animate();

#endif /*UTIL_FUNC*/

