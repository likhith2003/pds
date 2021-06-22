/*Write a C program that takes as input two integer elements
  from the keyboard, computes  and a/b, and prints their respective values on the terminal.
  The value of  should be correct up to 6th decimal place

  Example-
  Enter a and b: 2 3
  a+b = 5a-b = -1
  a*b = 6
  a/b = 0.666667 
  */

#include <stdio.h>
int main(){
  int a, b;
  printf("Enter a and b: ");
  scanf("%d%d", &a, &b);
  printf("a+b = %d\n", a+b);
  printf("a-b = %d\n", a-b);
  printf("a*b = %d\n", a*b);
  printf("a/b = %f\n", (float)a/(float)b);
  return 0;
}

