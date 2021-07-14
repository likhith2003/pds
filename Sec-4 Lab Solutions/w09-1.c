// Exchange first two digits with last two digits for n numbers.

#include <stdio.h>
#include <stdlib.h> // for malloc()
#define S 5 // largest number whose square does not exceed 16 + roll number 

int ndigits(int x){ // number of digits in x
  int n = 0;
  while(x != 0)
    x = x/10, n++;
  return n;
}

int pow_base_10(int p){ // 10^p
  int y = 1, i = 0;
  while(i++ < p)
    y *= 10; 
  return y;
}

int exchange(int x){
  int n = ndigits(x);       // number of digits
  int y = pow_base_10(n-2); // 10^{n-2}
  int ftd = x/y;            // first two digits
  int ltd = x%100;          // last two digits
  int exn;                  // digit-exchanged number
  
  switch(n){
    case 1: 
    case 2: exn = ltd*100; break;
    case 3: exn = ltd*100 + x/100; break;
    default: exn = (ltd * y/100 + (x%y)/100) * 100 + ftd; // justify why!?
  }
  
  return exn;
}

int main(){
  int i, n, *a;
  printf("Enter n: ");
  scanf("%d", &n);
  
  a = (int *)(malloc(n*sizeof(int))); // checking NULL is needed for safety. 
  
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
    scanf("%d",&a[i]);

  printf("New numbers = ");
  for(i=0; i<n; i++){
    a[i] = exchange(a[i]);
    printf(" %9d", a[i]);
  }
  
  printf("\nNumbers x%2d = ", S);
  for(i=0; i<n; i++)
    printf(" %9d", a[i] * S);
  printf("\n");
  
  return 1;
}
