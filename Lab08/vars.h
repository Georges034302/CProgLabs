#ifndef VARS_FUNC
#define VARS_FUNC
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define U_ON printf("\n\033[4m")
#define U_OFF printf("\033[0m ")
#define HIDE printf("\033[?25l")
#define CLEAR printf("\033[2J")
#define SET_CURSOR printf("\033[0;0H")
#define RESTORE_CURSOR printf("\033[?25h\n")
#define HEADER printf("%s\t%s\t\t%s","Encrypted ID","Name","Pointer")
#define MIN 100000
#define MAX 999999
#define KEY 100
#define random(min, max) ((rand()%(int)(((max) + 1)-(min)))+ (min))
#define FKEY(n,r,num) r+(n+1)*num
#define MASK(number,key) strcat(number,key)
#define file_name "records.txt"

typedef struct card{
    int number;
    char name[100];
    struct card *next;
}Node;

#endif /*VARS_FUNC*/
