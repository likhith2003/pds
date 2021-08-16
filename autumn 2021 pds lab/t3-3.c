#include <stdio.h>
#include <stdlib.h>

void add(char *x, char *y, char *z, int n){
  int i, c=0, s;

  for (i=n-1; i>=0; i--){
    s = x[i]-'0' + y[i]-'0' + c;
    if(s <=1)
      z[i+1] = '0' + s, c = 0;
    else 
      z[i+1] = '0' + s%2, c = 1; 
  }
  z[0] = c+'0', z[n+1] = '\0';
}

int main(){
  int n, i;
  char *x, *y, *z;
  
  printf("Enter the number of bits: ");
  scanf("%d", &n);
  
  x = (char *)malloc((n+1)*sizeof(char));
  y = (char *)malloc((n+1)*sizeof(char));
  z = (char *)malloc((n+2)*sizeof(char));
  
  printf("Enter the bits of x: ");
    scanf("%s", x);
  printf("Enter the bits of y: ");
    scanf("%s", y);
    
  add(x, y, z, n);
  printf("Sum in binary = z = %s\n", z);
  
  return 0;
}
