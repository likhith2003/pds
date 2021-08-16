#include<stdio.h>

int find_wrong_order(int *x, int *y, int n, int i){ 
  int j, k;
  for(j=k=0; j<n; j++)
    if((j<i && x[j]>x[i]) || (j>i && x[j]<x[i]))
      y[k++] = x[j];
  return k;
}
  
int main(){
  int a[100], b[100], n, i, j, k;
  
  printf("Enter n: "); scanf("%d", &n);
  printf("Enter the elements of a[]: ");
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  for(i=0; i<n; i++){
    k = find_wrong_order(a, b, n, i);
    if(k==0)
      printf("[%d] ", a[i]);
    else if(a[i]>b[0])
      printf("[%d] ", a[i]);
    for(j=0; j<k; j++){
      printf("%d ", b[j]);
      if(a[i]<b[j] && a[i]>b[j+1] && j<k-1)
        printf("[%d] ", a[i]);
    }
    if(a[i]<b[k-1])
      printf("[%d] ", a[i]);
    printf("\n");
  }

  return 0;
}
