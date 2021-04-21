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

void push(Node** head_ref, int key) {  
  Node* new_node = (struct cell*)malloc(sizeof(struct cell));  
  new_node->key = key;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

void append(Node** head_ref, int key) {
  Node* new_node = (struct cell*)malloc(sizeof(struct cell));
  Node* last = *head_ref;

  new_node->key = key;
  new_node->next = NULL;

  if (*head_ref == NULL) {
    *head_ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void createList(Node **head_ref, int size,int min, int max){
    push(&*head_ref,random(min,max));
    for(int i = 1; i< size; i++)
        append(&*head_ref,random(min,max));
}

Node *find(Node** head_ref, int key){
    Node *current = *head_ref;

    if(current == NULL) return NULL;

    while (current->key != key){
      if(current->next == NULL) 
         return NULL;
      else          
         current = current->next;      
    }

    return current;
}

void insert(Node** head_ref, int key,int min, int max){
    Node *current = find(&*head_ref,key);
    if(current == NULL) {
      printf("\nCurrent Node cannot be NULL, [%d,next] does not exist\n\n",key);
      return;
    }
   
    Node* new_node = (struct cell*)malloc(sizeof(struct cell));
    new_node->key  = random(min,max);
    new_node->next = current->next;
    current->next = new_node;
     printf("\n [%d,next] has been added to the list\n\n",new_node->key);
}

void deleteNode(Node** head_ref, int key){   
    Node *current = *head_ref;
    Node* previous = NULL;

    if (current != NULL && current->key == key){
        *head_ref = current->next; 
        printf("\n Head->[%d,next] has been deleted!\n\n",current->key);
        free(current);            
        return;
    }else{
      while (current != NULL && current->key != key){
        previous = current;
        current = current->next;
      }
    
      if (current == NULL) return;

      previous->next = current->next;
      printf("\n [%d,next] has been deleted!\n\n",current->key);
      free(current);
    }
}

void printList(Node** head_ref) {
    Node *ptr = *head_ref; 
    printf("\nHEAD->");       
    while(ptr != NULL) {
        printf("[%d,next]->",ptr->key);
        ptr = ptr->next;
    }    
    printf("NULL\n\n");
}

void freeList(Node** head_ref){   
   Node* current = *head_ref;
   Node* next;
 
   while (current != NULL)   {
       next = current->next;
       free(current);
       current = next;
   } 
   *head_ref = NULL;   
   printf("\nThe linked list has been deleted!\n\n");
}






