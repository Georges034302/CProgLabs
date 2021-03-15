#include "utils.h"
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void menu();
void help();

int main(void){
    menu();       
    return 0;
}

void menu(){
    help();
    char choice;   
    while((choice = readChar("Choice [a/b/c/d/e/f/g/h/x] -> ")) != 'x'){        
        switch(choice){
            case 'a' : grades();
                break;
            case 'b' : countVowels();
                break;
            case 'c' : drySpell();
                break;
            case 'd' : factorial();
                break;
            case 'e' : position();
                break;
            case 'f' : frequency();
                break;
            case 'g' : randomize();
                break;
            default : help(); 
                break;
        }        
    }
}

void help(){
    printf("\n>>>Menu options: \n");  
    printf("a = grades \n");
    printf("b = countVowels \n");
    printf("c = drySpell \n");
    printf("d = factorial \n");
    printf("e = position \n");
    printf("f = frequency \n");
    printf("g = random \n");
    printf("x = exit \n");
}


