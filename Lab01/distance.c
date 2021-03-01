#include <stdio.h>
#include <math.h>

//Read two points from user input A(x1, y1) and B(x2,y2)
//Calculate the distance between A and B
int main(void){
	int x1, y1, x2, y2;

	printf("x1 = ");
	scanf("%d",&x1);

	printf("y1 = ");
	scanf("%d",&y1);

	printf("x2 = ");
	scanf("%d",&x2);

	printf("y2 = ");
	scanf("%d",&y2);
	double dist = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	printf("Distance between A(%d,%d) and B(%d,%d) = %lf\n",x1,y1,x2,y2,dist);
}
