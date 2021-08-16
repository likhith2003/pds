/*
 * sinx.c
 *
 *  Created on: Jan 14, 2021
 *      Author: abir
 */

#include <stdio.h>
#include <math.h>

float sine_series(float x)
{
	// Initialize the series sum to the first term of the series
	float sum = x;
	// Initialize the counter to terms in the series
	int i = 1;
	// Declare the float to store two consecutive terms
	float previous_term = x;
	float next_term;
	// Declare the float that will store the absolute difference between two consecutive terms
	float abs_diff;
	do
	{
		next_term = (-previous_term*x*x)/(2*i*(2*i+1));
		sum += next_term;
		abs_diff = fabs(sin(x)-sum); //fabs(next_term-previous_term);
		previous_term = next_term;
		i++;
	}while(abs_diff>0.0001);
	return sum;
}


int main(void){
    float x, sinx, rad;

    printf("The value of x (in degrees): ");
    scanf("%f",&x);

    // Convert degrees to radian
    rad = x*3.142/180.0;

    sinx = sine_series(rad);

    printf("The value of sin%f is %f\n",x,sinx);

    return 0;

}