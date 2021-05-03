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
    Node *head = NULL; 
    while((choice = readChar("Choice [c/d/e/f/p/x] -> ")) != 'x'){        
        switch(choice){
            case 'c' : createList(&head);      
                break;   
            case 'd' : decryptFile();      
                break; 
            case 'e' : encryptFile();      
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
    U_ON;printf(">>>Menu options: \n");U_OFF; 
    printf("\rc = Create a list\n"); 
    printf("d = Decrypt file\n");
    printf("e = Encrypt file\n"); 
    printf("f = Free list \n"); 
    printf("p = Print list \n");    
    printf("x = exit \n");
}


