/*
Given a positive even number n > 2, express all even numbers up to n as the sum of two prime numbers.
This is always doable (Goldbach Conjecture).
*/

#include <stdio.h>
#include <math.h>

int is_prime(int i){
  int j;
  for (j=2; j<= sqrtf((float)i); j++)
    if(i%j == 0)
      return 0;
  return 1;
}
      
void sum_of_primes(int n){
  int i;
  for (i=2; i<=n/2; i++){
    if(is_prime(i) && is_prime(n-i)){
      printf("%2d + %2d\n", i, n-i);
      break;
    }
  }
}   

int main(){
  int n, i;
   
  printf("Enter an even number > 2: ");
  scanf("%d", &n);
  for(i=4; i<=n; i+=2){
    printf("%3d = ", i);    
    sum_of_primes(i);
  }  

  return 0;
}
