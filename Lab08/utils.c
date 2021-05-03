#include "vars.h"
#include "utils.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void push(Node** head_ref, int number,char *name) {  
  Node* new_node = (struct card*)malloc(sizeof(struct card));  
  new_node->number = number;
  strcpy(new_node->name, name);
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

void append(Node** head_ref, int number,char *name) {
  Node* new_node = (struct card*)malloc(sizeof(struct card));
  Node* last = *head_ref;

  new_node->number = number;
  strcpy(new_node->name, name);
  new_node->next = NULL;

  if (*head_ref == NULL) {
    *head_ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void createList(Node **head_ref){
    FILE *file;    
    file = fopen (file_name,"r");
    char parsedLine[150];
    int i = 1;
    if (file == NULL){
        fprintf(stderr, "\n Error while opening %s \n",file_name);
        exit (1);
    }  
    while (fgets(parsedLine, sizeof(parsedLine), file) != NULL) {        
        char *name = strtok(parsedLine, ","); 
        int input_num = atoi(strtok(NULL, ","));          
        int number = FKEY(i,random(MIN,MAX),input_num);         
        append(&*head_ref,number,name);
        i++;
    }    
    fclose(file);
    printf("\n>>> %s encryption is successful.\n\n",file_name);
}

char *mask(int number, int key){
    char text1[20];
    char text2[20];
    sprintf(text1, "%d", number);
    sprintf(text2, "%d", key);
    return MASK(text1,text2);
}

void printList(Node** head_ref) {
    Node *ptr = *head_ref; 

    U_ON;HEADER;U_OFF;      
    while(ptr != NULL) {
        char *masked_num = mask(ptr->number,random(MIN,MAX));
        printf("%-16s%-16snext->\n",masked_num,ptr->name);
        ptr = ptr->next;
    }    
    printf("\n");
}

void freeList(Node** head_ref){   
   Node* current = *head_ref;
   Node* next;
 
   while (current != NULL)   {
       next = current->next;
       free(current);
       current = next;
   } 
   *head_ref = NULL;   
   printf("\n>>> Records list has been deleted!\n\n");
}

void decryptFile(){
    char ch, fname[20];
	FILE *source, *temp;
	
	U_ON;printf("\n>>> Decrypting text file :");U_OFF;
	scanf("%s",fname);	
	
	source=fopen(fname, "w");
	if(source==NULL){
		printf(">%s does not exists or error in opening..!!\n",fname);
		exit(7);
	}
	temp=fopen("temp.txt", "r");
	if(temp==NULL){
		printf(">temp.txt does not exists or error in opening..!!\n");
		fclose(source);
		exit(9);
	}
	while(1){
		ch=fgetc(temp);
		if(ch==EOF)
			break;
		else{
			ch=ch-KEY;
			fputc(ch, source);
		}
	}
	printf("--> %s has been decrypted successfully..!!\n\n",fname);
	fclose(source);
	fclose(temp);
	remove("temp.txt");
	getchar();
}

void encryptFile(){
    char fname[20], ch;
	FILE *source, *temp;
	
	U_ON;printf("\n>>> Encrypt a text file :");U_OFF;
	scanf("%s",fname);	

	source=fopen(fname, "r");
	if(source==NULL){
		printf(">%s does not exists or error in opening..!!\n",fname);
		exit(1);
	}
	temp=fopen("temp.txt", "w");
	if(temp==NULL){
		printf(">temp.txt does not exists or error in opening..!!\n");
		fclose(source);
		exit(2);
	}

	while(1){
		ch=fgetc(source);
		if(ch==EOF)
			break;
		else{
			ch=ch+KEY;
			fputc(ch, temp);
		}
	}
	fclose(source);
	fclose(temp);
	source=fopen(fname, "w");
	if(source==NULL){
		printf(">%s does not exists or error in opening..!!\n",fname);
		exit(3);
	}
	temp=fopen("temp.txt", "r");
	if(temp==NULL){
		printf(">temp.txt does not exists or error in opening..!!\n");
		fclose(source);
		exit(4);
	}
	while(1){
		ch=fgetc(temp);
		if(ch==EOF)
			break;
		else
			fputc(ch, source);		
	}
	printf("--> %s has been successfully encrypted ..!!\n\n", fname);
	fclose(source);
	fclose(temp);	
	getchar();
}





