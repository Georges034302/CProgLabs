#include <stdio.h>
#include <string.h>

int main(void){
	typedef struct{
		int num;
		int denom;
	}fraction;

	int a, b;

	printf("Enter a and b: ");
	scanf("%d%d",&a,&b);

	fraction f = {a,b};

	int d = (f.num > f.denom) ? f.num/f.denom : 0;

	char s[20];
	if(d==0){
		char c = ' ';
		strncat(s,&c,1);
	}else
		sprintf(s,"%d",d);

	int q = f.num%f.denom;
	fraction r = {q,f.denom};

	printf("fraction: %i/%i = %s %i/%i\n",f.num,f.denom,s,r.num,r.denom);

	return 0;
}
