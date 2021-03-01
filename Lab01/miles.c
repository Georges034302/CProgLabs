#include <stdio.h>

int main(void){
	double km;
	const double ratio = 0.621371;
	printf("Distance in Kms: ");
	scanf("%lf",&km);

	double miles = km*ratio;

	printf("%0.2lf Kms = %0.2lf miles\n",km,miles);

	return 0;
}
