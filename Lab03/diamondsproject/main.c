#include "draw.h"
#include <stdio.h>

int main(void){

    int size = readInt("Diamond size = ");

    drawTop(size);
    drawMiddle(size);
    drawBottom(size);

    return 0;
}
