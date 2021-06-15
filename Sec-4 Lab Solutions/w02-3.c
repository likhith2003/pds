// <Your Name>
// <Your Roll Number>

#include <stdio.h>

int main(){
  int n, a, b;
  
  printf("Enter n: ");
  scanf("%d", &n);
  
  a = n/10; b = n-a*10; n = b*1000 + a;
  printf("%d\n", n);
  a = n/10; b = n-a*10; n = b*1000 + a;
  printf("%d\n", n);
  a = n/10; b = n-a*10; n = b*1000 + a;
  printf("%d\n", n);
  a = n/10; b = n-a*10; n = b*1000 + a;
  printf("%d\n", n);
    
  return 0;
}

