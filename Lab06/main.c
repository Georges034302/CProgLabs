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
    int min;
    int max;
    int size;
    int *parray;
    while((choice = readChar("Choice [g/s/v/x] -> ")) != 'x'){        
        switch(choice){  
            case 'g' : {
                min = readInt("Min = ");
                max = readInt("Max = ");
                size = readInt("Size= ");
                parray = randomArray(min,max,size);
                U_ON;printf("Random integer array properies:");U_OFF;
                U_ON;HEADER;U_OFF;
                printf("\t%d\t%d\t%d\t%p\n\n",min,max,size,parray);
            };
                break;   
            case 's' : sort(size,parray);
                break;       
            case 'v' : show("\nRandom Array:",size,parray);
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


