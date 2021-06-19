// Given a positive integer n (of at most 4 digits), transform it to another number m
// which is a copy of n with every prime digit of n made to follow by its next digit.

#include <stdio.h>

int main(){
  unsigned int n, m=0, r=1;
  int i;
  
  printf("Enter n: ");
  scanf("%d", &n);
  
  do{
    i = n - 10*(n/10);
    n = n/10;
    if (i==2 || i==3 || i==5 || i==7){
      m = (r*10*i) + r*(i+1) + m;
      r = 100*r;
    }
    else{
      m = r*i + m;
      r = 10*r;
    }
  }while(n>0);
  
  printf("m = %d.\n", m);
  return 0;
}


