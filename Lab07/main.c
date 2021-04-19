#include "vars.h"
#include "utils.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char readChar(char[]);
void menu();
void help();

int main(void){    
    menu();       
    return 0;
}

void menu(){
    help();
    char choice;  
    int min ;
    int max ;
    int size;   
    Node *head = NULL; 
    while((choice = readChar("Choice [c/d/i/f/p/x] -> ")) != 'x'){        
        switch(choice){  
            case 'c' : {               
                min = readInt("Random Min = ");
                max = readInt("Random Max = ");
                size= readInt("List Size  = ");
                createList(&head,size,min,max);                            
            }
                break;  
            case 'd' : {
                int key = readInt("Key  = ");
                deleteNode(&head,key);
            };
                break;
            case 'i' : {
                int key = readInt("Key  = ");
                insert(&head,key,min,max);
            };
                break; 
            case 'f' : freeList(&head);
                break;  
            case 'p' : printList(&head);
                break;   
            default : help(); 
                break;
        }        
    }
}

char readChar(char s[]){
    char c;
    printf("%s",s);
    scanf("%c",&c);    
    getchar();
    return c;
}

void help(){
    printf("\n>>>Menu options: \n");  
    printf("c = Create list \n"); 
    printf("d = Delete by key \n");   
    printf("i = Insert by key \n");
    printf("f = Free list \n"); 
    printf("p = Print list \n");    
    printf("x = exit \n");
}


