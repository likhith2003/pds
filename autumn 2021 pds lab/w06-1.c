#include <stdio.h>

int find_rank(int a[], int i, int n){
  int j, r=0;
  for(j=0; j<n; j++)
    if(a[j] >= a[i])
      r++;
  return r;
}

int main(void){
  int a[100], b[100], n, i;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("Enter %d integers: ", n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  for(i=0; i<n; i++)
    b[i] = find_rank(a, i, n);
  printf("Ranks: ");
  for(i=0; i<n; i++)
    printf("%d ", b[i]);
  printf("\n");
  return 0;
}
