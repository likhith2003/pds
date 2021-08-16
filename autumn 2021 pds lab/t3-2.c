#include <stdio.h>

float gpseriessum(float x, int y)
{
	int i;
	float z;
	z = x;
	for (i=1; i<y; i++)
		z*=x;
	return x*(z-1)/(x-1);
}

int main() {

	float x;
	int y;
	printf("Enter x: ");
	scanf("%f",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	// Its a GP with y terms, a=x, r=x. x(x^y - 1)/(x - 1)
	float sum;
	sum = gpseriessum(x, y);
	printf("x + x^2 + ... + x^y is: %f\n",sum);
	return 0;
}