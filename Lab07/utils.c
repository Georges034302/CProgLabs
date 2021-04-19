#include "vars.h"
#include "utils.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int readInt(char s[]){
    int value;
    printf("%s",s);    
    scanf("%d",&value);
    getchar();    
    return value;
}

//Push a cell to the begining of a list
void push(Node** head_ref, int key) {  
 
}

//Traverse a list to the end then add an elment after the last
void append(Node** head_ref, int key) {
 
}

//Create a list of random-key values
void createList(Node **head_ref, int size,int min, int max){
    
}

//Return a node by key
Node *find(Node** head_ref, int key){
    
    return NULL;
}

//Insert a cell after a Node of value: key
void insert(Node** head_ref, int key,int min, int max){
   
}

//Delete a Node from a list by key
void deleteNode(Node** head_ref, int key){   
   
}

//Print a linked list
void printList(Node** head_ref) {
    
}

//Delete a linked list
void freeList(Node** head_ref){   
  
}






