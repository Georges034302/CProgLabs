#ifndef VARS_FUNC
#define VARS_FUNC

#include  <string.h>

#define U_ON printf("\n\033[4m")
#define U_OFF printf("\033[0m\n")
#define HEADER printf("\t%s\t%s\t\t%s\t%s","ID","Name","MARK","GRADE")
#define file_name "students.dat"
#define randomID(min, max) ((rand()%(int)(((max) + 1)-(min)))+ (min))
#define grade(mark) (mark>=85)?"H":(mark>=75)?"D":(mark>=65)?"C":(mark>=50)?"P":"Z"
#define exist(string,word) (strstr(string, word) != NULL)

typedef struct Profile{
    int id;
    char name[50];
    int mark;
    char grade[4];
}Student;

#endif /*VARS_FUNC*/
