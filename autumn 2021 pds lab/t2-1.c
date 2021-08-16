
/* Given a positive integer n as input, find the smallest value of 4^p that is at least n. 
 * p is of course an integer. 
 * You cannot use any multiplication, division, modulo operation, or math library.
 */

#include <stdio.h>

int main(){
  int n, p=1;
  
  printf("\nEnter n: ");
  scanf("%d", &n);
  
  while(p<n){
    p += p;
    p += p;
  }
  
  printf("min 4^p= %d\n\n", p);
  return 0;
}

/*
 n = 10
 p = 2 -> 4
 4 < 10
 p = 4+4 = 8
 p = 8+8 = 16
 16 < 10 is false
 print 16

 p + p + p + p = 4p
 => 4^p = 4 * 4^{p-1}  
*/









