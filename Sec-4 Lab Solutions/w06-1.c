// Sequence without loop

#include <stdio.h>

void g(int n, int i, int j){
  if(j<n){
    printf("%d", ((j+i)/i)%2); 
    j++; 
    g(n,i,j);
  }
}

void f(int n, int i){
  int j=0;
  printf("%3d = ", i*i);
  g(i*i, i, j);
  printf("\n");
  i++;
  if(i*i<=n)
    f(n,i);
}

int main(){
  int n, i=1;
  printf("Enter a whole number: "); scanf("%d", &n);
  f(n, i);
  return 0;
}
