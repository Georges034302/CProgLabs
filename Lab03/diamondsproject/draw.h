#ifndef DRAW_FUNC
#define DRAW_FUNC

/*
 * Draw a diamond of items (any item) of size n
 * Compute the solution using reusable methods.
 */

#include<stdio.h>

//read the size of the diamond
int readInt(char[]);

//draw a line of items
void drawItem(char*,int);

//draw a line stars of certain size 
void drawLine(int,int);

//draw bottom section of the diamond of certain size
void drawBottom(int);

//draw middle line of the diamond of certain size
void drawMiddle(int);

//draw top section of the diamond of certain size
void drawTop(int);

#endif /*DRAW_FUNC*/
