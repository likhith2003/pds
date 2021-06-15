// Print the smallest m numbers in increasing order. 

#include <stdio.h>

int main() {
  int a[100], x, i, j, n, m, t, flag;
  
  printf("Enter n: ");
  scanf("%d", &n);
  
  printf("Enter %d distinct numbers:\n", n);
  for(i=0;i<n; ){
    scanf("%d", &x);
    flag = 0;
    for(j=0; j<i; j++){ // search in the saved list: a[0],...,a[i-1]
      if(a[j]==x){
        printf("Number already exists; please enter a different number.\n"); 
        flag = 1; break;
      }
    }
    if (flag==0)
      a[i++] = x;
  }
  
  printf("Numbers in the array:\n");
  for(i=0;i<n;i++)
    printf("%d ", a[i]);

  printf("\nEnter m: ");
  scanf("%d", &m);
  
  for(i=0;i<m;i++){ // find just m smallest, in order, and store in a[0],...,a[m-1].
    for(j=0;j<n-i-1;j++){
      if(a[j]<a[j+1]){
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }
    }
  }
  
  printf("Smallest %d numbers in order:\n", m);
  for(i=0;i<m;i++)
    printf("%d ", a[n-i-1]);
  printf("\n\n");
  
  return 0;
}
