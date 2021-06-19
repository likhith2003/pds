// Compute 1!+2!+3!+...+n! for n=1 to 12 without recursive function.
// Note: 11 multiplications are enough.

#include <stdio.h>

int main(){
  int n, f, g[12];
   f = g[0] = 1;  

  for(n=2; n<=12; n++){
    f = f*n;
    g[n-1] = f+g[n-2];
  }
  
  for(n=0; n<12; n++)
    printf("%d ", g[n]);
  
  return 1;
}
