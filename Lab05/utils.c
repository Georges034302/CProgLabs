#include "vars.h"
#include "utils.h"
#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

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
    scanf("%[^\n]s",c);
    getchar();
    return c;
}

Student createStudent(){
    Student s;
    s.id = randomID(100,999);
    strcpy(s.name,readString("Name: "));
    s.mark = readInt("Mark: ");
    strcpy(s.grade,grade(s.mark));
    return s;
}

void addStudent(){
    Student s = createStudent();
    char *filename = file_name;
    FILE *file = fopen(filename,"ab+");
    if(file == NULL){
        fprintf(stderr,"\n Error while opening %s\n",filename);
        exit(1);
    }
    fwrite(&s,sizeof(Student),1,file);
    printf("%s profile has been successfully saved to %s\n",s.name,filename);
    printf("\n");
    fclose(file);
}

void readStudent(){
    Student s;
    bool found = false;
    char *aname = readString("Search for: ");
    FILE *file = fopen(file_name,"rb");
    if(file == NULL){
        fprintf(stderr,"\n Error while opening %s\n",file_name);
        exit(1);
    }
    while(fread(&s,sizeof(Student),1,file)){
        if(strcmp(s.name,aname) == 0){
            U_ON;
            printf(">> Student %s profile:\n",aname);
            U_OFF;
            U_ON;
            HEADER;
            U_OFF;
            printf("\n\t%d\t%-10s\t%d\t%s",s.id,s.name,s.mark,s.grade);
            found = true;
            break;
        }
    }
    if(!found)
        printf("%s profile was not found in %s \n",aname,file_name);
    printf("\n");
    fclose(file);
}

void viewRecord(){
    Student s;
    FILE *file = fopen(file_name,"rb");
    if(file == NULL){
        fprintf(stderr,"\n Error while opening %s\n",file_name);
        exit(1);
    }
    U_ON;
    HEADER;
    U_OFF;
    while(fread(&s,sizeof(Student),1,file))
        printf("\n\t%d\t%-10s\t%d\t%s",s.id,s.name,s.mark,s.grade);
    printf("\n");
    fclose(file);
}







