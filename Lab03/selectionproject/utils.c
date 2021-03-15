#include "utils.h"
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include <stdlib.h>

double read(char s[]){
    double value;
    printf("%s",s);
    scanf("%lf",&value);
    getchar();
    return value;
}

char readChar(char s[]){
    char c;
    printf("%s",s);
    scanf("%c",&c);    
    getchar();
    return c;
}

void countVowels(){
    int count = 0;
    char c;
    while( (c = readChar("Character: ")) != '.'){       
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')           
            count++;       
    }
    printf("Vowel count = %d\n",count);    
}

void drySpell(){
    int max = 0;
	int count = 0;
	double rainfall;
	while ((rainfall=read("Rainfall: ")) != -1) {
		if (rainfall == 0) {
			count++;
		}
		else {
			if (count > max)
				max = count;
			count = 0;
		}		
	}
	if (count > max)
		max = count;
	printf("Longest dry spell = %d\n",max);
}

void factorial(){
    int n = read("n = ");
    int f = 1;
    for(int i=1; i<=n; i++){
        f *= i;
    }
    printf("factorial(%d) = %d\n",n,f);
}

void frequency(){
    int count[10]={0};
    int value;
    while((value=(int)read("Value = ")) != -1){        
        count[value/10]++;
    }
    for(int i=0 ; i<10 ; i++){
        int start = 10*i;
        int end = start+9;
        printf("%d - %d : %d \n",start,end,count[i]);
    }
}

void grades(){
    double mark = read("Enter your mark: ");
    char *s;
    if(mark >= 85)
        s="HD";
    else if(mark >= 75)
        s="D";
    else if(mark >= 65)
        s="C";
    else if(mark >= 50)
        s="P";
    else    
        s="Z";
    printf("Your grade is: %s\n",s);
}

void position(){
    int x = (rand()%100)+1;
    int y = (rand()%100)+1;
    bool bottom_left  = (x <= 50 && y <= 50 );
    bool bottom_right = (x > 50 && y <= 50 );
    bool top_left  = (x <= 50 && y > 50);
    bool top_right = (x > 50 && y > 50);

    if(bottom_left)
        printf("Car is located bottom_left\n");
    if(bottom_right)
        printf("Car is located bottom_right\n");
    if(top_left)
        printf("Car is located top_left\n");
    if(top_right)
        printf("Car is located top_right\n");
}

void randomize(){
    int n = read("n = ");
    int numbers[10]={0};

    for(int i=0 ; i <n ; i++)
        numbers[i] = rand()%n + 1;
    for(int i=0 ; i < 10 ; i++)
        printf("numbers[%d] = %d \n",i,numbers[i]);

}


