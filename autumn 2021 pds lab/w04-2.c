/*
User gives a positive integer a (>1) as input.
Compute and print its prime factorization.
You should not use array or math library.
You cannot use nested loops but can use only one for loop / while loop / do-while loop.

      $ ./a.out    
      Enter a positive integer: 2
      Prime factorization = 2.  

      $ ./a.out 
      Enter a positive integer: 4
      Prime factorization = 2 x 2.  

      $ ./a.out 
      Enter a positive integer: 6
      Prime factorization = 2 x 3.  

      $ ./a.out 
      Enter a positive integer: 72
      Prime factorization = 2 x 2 x 2 x 3 x 3.  

      $ ./a.out 
      Enter a positive integer: 78781211
      Prime factorization = 107 x 736273.  

      $ ./a.out 
      Enter a positive integer: 87654321
      Prime factorization = 3 x 3 x 1997 x 4877.  
*/

#include <stdio.h>

int main(){
  int a, d = 2, q; // d = divisor, q = quotient

  printf("Enter a positive integer: ");
  scanf("%d", &a);
  
  printf("Prime factorization = ");
  do{
    q = a/d;
    if (q*d == a){
      printf("%d x ", d);
      a = a/d;
    }
    else
      d++;
  }
  while(a>=d);
  
  printf("\b\b \b\b.\n");

  return 0;
}
