#include <stdio.h>
#include <math.h>
//Read a radius from user-input
//Calculate the circumference of a circle with that radius
//Calculate the area of a circle with that radius

int main(void){
	double radius;

	printf("Radius = ");
	scanf("%lf",&radius);

	double circumference = 2*M_PI*radius;
	double area = M_PI*pow(radius,2);

	printf("Circumeference = %lf\n",circumference);
	printf("Area = %lf\n",area);

	return 0;
}

