#ifndef VARS_FUNC
#define VARS_FUNC

#define U_ON printf("\n\033[4m")
#define U_OFF printf("\033[0m\n")
#define HEADER printf("\t%s\t%s\t%s\t%-14s","START","END","SIZE","POINTER")
#define randomInt(min, max) ((rand()%(int)(((max) + 1)-(min)))+ (min))

#endif /*VARS_FUNC*/
