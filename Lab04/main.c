#include "utils.h"
#include<stdio.h>
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

    while((choice=readChar("Chocie [f/l/p/w/x]: ")) != 'x'){
       switch(choice){
            case 'f': factorialSeries();
                break; 
            case 'l': linear();
                break; 
            case 'p': palindrome();
                break;  
            case 'w': welcome();
                break;           
            default: help();
                break;
       } 
    }
}

void help(){
    printf("\n>>> Menu options: \n");
    printf("f = Factorial Series \n");   
    printf("l = Linear Search \n");
    printf("p = Palindrome \n");
    printf("w = Welcome \n");
    printf("x = exit \n");
}

