#include <stdio.h>

int main (void){
	int a, b;
	printf("a = ");
        scanf("%d",&a);
        printf("b = ");
        scanf("%d",&b);

	//dividing 2 integers
	printf("a/b = %d\n",(a/b));

	//printf("a/b = %f\n",(a/b));

	float div1 = a/b;
	printf("a/b = %f\n",div1);

        float div2 = (float)a/b;
        printf("a/b = %f \n",div2);

	return 0;
}
