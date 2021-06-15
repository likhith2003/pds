// nCr for all r using recursion

#include<stdio.h>

int nCr(int n, int r){
  if (r==n || r==0) 
    return 1;
  else
    return nCr(n-1, r-1) + nCr(n-1, r);
}

int main(){
  int n, r;
  printf("\nEnter n: ");
  scanf("%d", &n);
  printf("Result: ");
  for(r=0; r<=n; r++)
    printf("%d ", nCr(n, r));
  printf("\n");
  return 1;
}

