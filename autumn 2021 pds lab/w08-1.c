#include<stdio.h>

void swap(int *x, int *y){ 
  int t;
  t = *x; *x = *y; *y = t;

  // Print the addresses of x and y and the values stored in x and y
  
  printf("\nAddresses of x, y = ");
    printf("%p  %p", &x, &y);
  
  printf("\nAddresses in x, y = ");
    printf("%p  %p", x, y);
}
  

int main(){
  int a, b;
  
  printf("Enter a, b: ");
  scanf("%d%d", &a, &b);
  printf("\nAddresses of a, b = %p  %p", &a, &b);
  
  swap(&a, &b);
  printf("\nAfter swap: a, b = %d, %d.\n", a, b);
  return 0;
}
