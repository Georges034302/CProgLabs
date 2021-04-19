#ifndef UTIL_FUNC
#define UTIL_FUNC
#include "vars.h"
#include <stdio.h>

//read an integer from user-input
int readInt(char[]);

//insert a cell [key-value->next] at the begining of the list
void push(Node **, int);

//insert a cell [key-value->next] at the end of the list
void append(Node **, int);

//generate a linkedlist of cells [key-value]: key [0-size] and value [radom:min-max]
void createList(Node **,int,int,int);

//print the linked list
void printList(Node**);

//insert a cell after a Node with key
void insert(Node** head_ref, int ,int , int );

//delete a cell by key: verify if the cell exist before deleting
void deleteNode(Node **, int);

//free the linked list 
void freeList(Node**);

#endif /*UTIL_FUNC*/

