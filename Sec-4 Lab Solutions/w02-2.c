


#include <stdio.h>

int main(){
  float x, y;
  
  printf("Enter x: ");
  scanf("%f", &x);
  
  y = x*x; // y = x^2
  y = y*y; // y = x^4
  y = y*y; // y = x^8
  
  y = (y-1)/(x-1); // (x^8-1)/(x-1) 
  
  printf("Answer = %12.10f\n", y); 
    
  return 0;
}

