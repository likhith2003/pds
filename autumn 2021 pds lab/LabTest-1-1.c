#include <stdio.h>

int main(){
  int n;
  float u1, u2, a1, a2;
  float d1, d2, d; // d1, d2 = distance traversed by the particles

  printf("Enter the Value of u1: ");
  scanf("%f", &u1);

  printf("Enter the value of u2: ");
  scanf("%f", &u2);

  printf("Enter the value of a1: ");
  scanf("%f", &a1);

  printf("Enter the value of a2: ");
  scanf("%f", &a2);

  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("\n");

  d1 = u1 * (float)n + 0.5 * a1 * (float)(n * n);
  d2 = u2 * (float)n + 0.5 * a2 * (float)(n * n);
  if (d1>d2) 
      d = d1-d2;
  else 
      d = d2-d1;
  
  printf("The distance between the two particles after %d seconds is %.4f\n", n, d);

}
