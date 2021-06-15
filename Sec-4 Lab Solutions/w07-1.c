// Matrix multiplication

#include<stdio.h>

int main(){
  int m, n, p, a[10][10], b[10][10], c[10][10], i, j, k;
  
  printf("\nEnter #rows & #columns of 1st matrix: ");
  scanf("%d%d", &m, &n);
  printf("Enter #columns of 2nd matrix: ");
  scanf("%d", &p);
  
  printf("Enter Matrix A:\n");
  for(i=0; i<m; i++)
    for(j=0; j<n; j++)
      scanf("%d", &a[i][j]);
    
  printf("Enter Matrix B:\n");
  for(i=0; i<n; i++)
    for(j=0; j<p; j++)
      scanf("%d", &b[i][j]);
    
  for(i=0; i<m; i++)
    for(j=0; j<p; j++)
      for(c[i][j]=k=0; k<n; k++)
        c[i][j] += a[i][k] * b[k][j];
      
  printf("Output matrix:\n");
  for(i=0; i<m; i++, printf("\n"))
    for(j=0; j<p; j++)
      printf("%3d ", c[i][j]);
  printf("\n");
  
  return 1;
}
