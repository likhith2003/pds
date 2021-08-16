/* 
Write a program to find the real or complex roots of ax^2 + bx + c = 0, 
where a, b, c are real and given as input by the user.
*/

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, det, x1, x2, re, im;
    
    printf("Enter a, b, c in order: ");
    scanf("%f%f%f", &a, &b, &c);
	
	det = b*b - 4*a*c;
    if (det>=0){
		det = sqrt(det);
		x1 = (-b + det)/(2*a), x2 = (-b - det)/(2*a);
	    printf("Real roots = %f, %f\n\n", x1, x2);
	}
	else{ 
		det = sqrt(-det);
		re = -b/(2*a), im = det/(2*a);
	    printf("Complex roots = %f+%fi, %f-%fi\n\n", re, im, re, im);
	}

    return 1;
}


