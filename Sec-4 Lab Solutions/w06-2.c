// Print all numbers formed by the digits in an array

#include <stdio.h>
int count = 0; 

void print_the_number(int a[], int r){
  int i = (a[0] == 0)? 1 : 0;
  if(i==1) printf(" ");
  while(i < r+1)
    printf("%d", a[i++]);
  printf(" ");
  count++;
  if(count % 10 == 0)
  printf("\n");
}

void permute(int a[], int l, int r){
  int i, temp;
  
  if (l == r)
    print_the_number(a, r);
  else{
    for (i = l; i <= r; i++){
        temp = a[l]; a[l] = a[i]; a[i] = temp;
        permute(a, l+1, r);
        temp = a[l]; a[l] = a[i]; a[i] = temp;
    }
  }
}

int main(){
  int a[10], n, i;
  printf("Enter the number of digits: ");
  scanf("%d", &n);
  printf("Enter %d distinct digits: ", n);
  for (i=0; i< n; i++)
    scanf("%d", &a[i]);
  printf("\nNumbers:\n");
  permute(a, 0, n-1);
  printf("\nCount = %d.\n", count);
  return 0;
}
