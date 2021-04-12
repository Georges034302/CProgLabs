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
    
    while((choice = readChar("Choice [g/s/v/x] -> ")) != 'x'){        
        switch(choice){  
            case 'g' : ;
                break;   
            case 's' : ;
                break;       
            case 'v' : ;
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
    printf("g = Generate Array \n");   
    printf("s = Sort Array \n"); 
    printf("v = Show Array \n");
    printf("x = exit \n");
}


