#include "draw.h"
#include <stdio.h>
#include <stdlib.h>

int readInt(char s[]){
    int value;
    printf("%s",s);
    scanf("%d",&value);
    getchar();
    return value;
}

void drawItem(char *c,int howmany){
    for(int i=0 ; i<howmany ; i++)
        printf("%s",c);
}

void drawLine(int howmany, int size){
    int spaces = size  - howmany;
    drawItem(" ",spaces);
    drawItem("* ",howmany);
    printf("\n");
}

void drawBottom(int size){
    for(int i=size-1 ; i>0 ; i--)
        drawLine(i,size);
}

void drawMiddle(int size){
    drawLine(size,size);
}

void drawTop(int size){
    for(int i=1 ; i<size ; i++)
        drawLine(i,size);
}






