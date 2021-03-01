#include <stdio.h>
/*
 Read a volume in ounces
 Store the volume value into a double variable
 convert the ounce-value into milliliter-value
 show the milliliter value
*/

int main(void){
	double onces = 0.0;
	double milliliters = 0.0;
	double factor = 0.033814;

	printf("Enter the volume in onces: ");
	scanf("%lf",&onces);

	milliliters = onces/factor;

	printf("%0.2lf onces = %0.2lf milliliters \n",onces,milliliters);

	return 0;
}
