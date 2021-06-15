// Write a program that takes n positive integers as input and finds the sum of their 
// first digits and the sum of their last digits.

#include <stdio.h>

int main(){
  int n, i, x, sum_first = 0, sum_last = 0;
  
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter the numbers: ");
  
  for(i=0; i<n; i++){
    scanf("%d", &x);
    sum_last += x%10;
    
    while(x>9) 
      x = x/10;
    
    sum_first += x;
  }
      
  printf("sum of first digits, sum of last digits = %d, %d.\n", sum_first, sum_last);
  return 1;
}




