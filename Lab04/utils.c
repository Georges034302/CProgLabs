#include "utils.h"
#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>

int readInt(char s[]){
    int value;
    printf("%s",s);
    scanf("%d",&value);
    getchar();
    return value;
}

char *readString(char s[]){
    char *c = malloc(100);
    printf("%s",s);
    scanf("%s",c);
    getchar();
    return c;
}

int *randomize(int size, int seed){
    int *numbers=malloc(size*seed); //enough memory for the integer values + 3 (minimum)
    for(int i=0; i<size; i++)
        numbers[i] = (rand()%seed) + 1; //generates 0-seed+1  random integers  
    return numbers;
}

int factorial(int n){
    if(n==0) return 1;
    else return n*factorial(n-1);
}

void factorialSeries(){
    int n = readInt("Size = ");
    int seed = readInt("Seed = ");
    int *numbers = randomize(n,seed);
    for(int i=0; i<n; i++)
        printf("Factorial(%d) = %d \n",numbers[i],factorial(numbers[i]));
    printf("\n");
}

void linear(){
    int n = readInt("Size = ");
    int seed = readInt("Seed = ");
    int *numbers = randomize(n,seed);
    int e = readInt("Searching for: ");
    bool found = false;
    for(int i=0 ; i< n ; i++){
        if(e == numbers[i]){
            found = true;
            break;
        }
    }
    if(found){
        printf("%d is found in the array: [",e);        
    }else{
        printf("%d is not found in the array: [",e);
    }
    for(int i=0; i<n; i++)
        printf(" %d ",numbers[i]);
    printf("] \n");
}

bool login(char user[], char password[]){
    char *name = "George";
    char *pass = "pass";
    return (strcmp(user,name) == 0) &&(strcmp(password,pass)==0);
}

void welcome(){
    char *name = readString("Enter a name: ");
    char *password = readString("Enter a password: ");
    bool verify = login(name,password);
    if(verify)
        printf("Welcome George\n");
    else
        printf("Unknown user!!!\n");
}

void palindrome(){
    char *s1 = readString("String: ");
    char *s2 = malloc(strlen(s1)*2);
    for(int i=strlen(s1)-1; i>=0; i--)
        strncat(s2,&s1[i],1);
    if(strcmp(s1,s2)==0)
        printf("%s is a palindrome \n",s1);
    else
        printf("%s reversed is %s \n",s1,s2); 
}





















