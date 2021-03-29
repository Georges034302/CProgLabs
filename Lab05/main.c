#include "vars.h"
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

void help();
void menu();
char readChar(char[]);

int main(void){
    menu();    
    return 0;
}

char readChar(char s[]){
    char c;
    printf("%s",s);
    scanf("%c",&c);
    getchar();
    return c;
}

void menu(){
    help();
    char choice;

    while((choice=readChar("Chocie [w/r/v/x]: ")) != 'x'){
       switch(choice){
            case 'w': addStudent();
                break; 
            case 'r': readStudent();
                break; 
            case 'v': viewRecord();
                break;                    
            default: help();
                break;
       } 
    }
}

void help(){
    printf("\n>>> Menu options: \n");
    printf("w = Add Student \n");   
    printf("r = Find Student \n");
    printf("v = View Record \n");
    printf("x = exit \n");
}

