#include <stdio.h>
#include <stdbool.h>

int main(void) {

   	int  i = 17;
	char c = 'c'; /* ascii value is 99 */
	int sum;
	sum = i + c;
	printf("Value of sum : %d\n", sum );

	float sumf = sum +1.5;

	printf("value of sumf: %f\n", sumf);

	bool yes = true;
	printf("yes = %d\n",yes);

	double sumd = sumf + yes;
	printf("value of sumd: %f\n",sumd);
	return 0;

}
