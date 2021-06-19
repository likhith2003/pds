// Find recursively defined numbers.

#include <stdio.h>

int main(){
  int n;
  unsigned long int a0=3, b0=2, a=3, b=2;
  printf("n = %d: %lu / %lu = %f\n", 2, a, b, (float)a/(float)b);
  
  for (n=3; n<7; n++){
    a = a0*a0 + 2*b0*b0, b = 2*a0*b0; 
    /* GCD(a,b) = 1 for a > 2 -- see the logic in the question paper.*/
    printf("n = %d: %lu / %lu = %f\n", n, a, b, (float)a/(float)b);
    a0 = a, b0=b;
  } 
  
  return 1;
}
