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

int *randomArray(int min, int max, int size){
    int *numbers = malloc(size*max);

    for(int i=0; i< size; i++)
        numbers[i] = randomInt(min,max);
    return numbers;
}

void show(char *prompt, int size, int * nums){
    U_ON;printf(prompt);U_OFF;
    for(int i=0; i< size; i++)
        printf("*(nums + %d) = %d \n",i,*(nums+i));
    printf("\n");
}

void swap(int *nums, int i, int j){
    int temp = *(nums+i);
    *(nums+i) = *(nums+j);
    *(nums+j) = temp;
}

void sort(int size, int* nums){
    for(int i=size-1; i >0; i--){
        for(int j=0; j< i; j++){
            if(*(nums+j) > *(nums+i))
                swap(nums,i,j);
        }
    }
    show("\nSorted array",size,nums);
}
























