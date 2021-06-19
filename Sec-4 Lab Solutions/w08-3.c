#include <stdio.h>
#include <stdlib.h>

void shiftRight(int *a, int n){
  int i, x;
  x = a[n-1];
  for(i=n-1; i>0; i--)
    a[i]=a[i-1];
  a[0]=x;
}

int main(){
  int n, *a, i, s;
  printf("Enter the length of array: ");
  scanf("%d", &n);

  a = (int *)malloc(n*sizeof(int));
  if(a==NULL){
    printf("Insufficient memory. Program terminated...\n");
    exit(0);
  }

  printf("Enter %d integers: ", n);
  for(i=0; i<n; i++)
    scanf("%d",&a[i]);

  printf("\nInput elements:");
  for(i=0; i<n; i++)
    printf(" %2d",a[i]);

  for(s=0; s<n; s++){
    shiftRight(a, n);
    printf("\nAfter shift %d: ", s+1);
    for(i=0; i<n; i++)
      printf(" %2d",a[i]);
  }
  printf("\n\n");
  
  return 1;
}
