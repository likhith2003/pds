#include<stdio.h>
#include<stdlib.h>

void print(char c, int a[], int n){
  int i;
  printf("%c = ", c);
  for(i=0; i<n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int nonzero_largest(int a[], int n){
  int i, max = 0, val;
  
  for (i=0; i<n; i++)
    if(a[i] > a[max])
      max = i;
    
  val = a[max]; a[max] = 0;
  return val;
}

int main(){
  int n, i, j, max;
  int *a, *b;

  printf("Enter n: "); scanf("%d", &n);

  a=(int*)malloc(n*sizeof(int));  
  b=(int*)malloc(n*sizeof(int));  

  printf("Enter the elements of a: ");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  
  for(i=n-1; i>=0; i--)
    b[i] = nonzero_largest(a, n);
  
  print('a', a, n);
  print('b', b, n);
  
  return 0;
}

