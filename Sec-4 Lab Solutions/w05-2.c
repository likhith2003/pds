// Write a program to reverse the digits of a number to get a new number (using function).

#include <stdio.h>

int reverse(int n){
  int m = 0;
  do{
    m = m*10 + n%10;
    n = n/10;
  }
  while(n>0);
  
  return m;
}

int main(){
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  
  printf("Reverse number = %d.\n", reverse(n));
    
  return 1;
}
