#ifndef VARS_FUNC
#define VARS_FUNC
#include <stdlib.h>
#define U_ON printf("\n\033[4m")
#define U_OFF printf("\033[0m\n")
#define random(min, max) ((rand()%(int)(((max) + 1)-(min)))+ (min))

typedef struct cell{
    int key;
    struct cell *next;
}Node;

#endif /*VARS_FUNC*/
