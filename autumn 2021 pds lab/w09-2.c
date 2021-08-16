#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu{
  char name[50]; int marks;};

void print(char c, struct stu a[], int n){
  int i;
  printf("%c:\n", c);
  for(i=0; i<n; i++)
    printf("%-10s %d\n", a[i].name, a[i].marks);
  printf("\n");
}

int nonzero_largest(struct stu a[], int n){
  int i, max = 0;
  
  for (i=0; i<n; i++)
    if(a[i].marks > a[max].marks)
      max = i;
    
  return max;
}

int main(){
  int n, i, j, max;
  struct stu *a, *b;

  printf("Enter #students: "); scanf("%d", &n);

  a=(struct stu *)malloc(n*sizeof(struct stu));  
  b=(struct stu *)malloc(n*sizeof(struct stu));  

  printf("Enter the names and marks:\n");
  for(i=0;i<n;i++)
    scanf("%s%d", a[i].name, &a[i].marks);
  printf("\n");
  
  for(i=n-1; i>=0; i--){
    max = nonzero_largest(a, n);
    strcpy(b[i].name, a[max].name);
    b[i].marks = a[max].marks;
    a[max].marks = 0;
  }
  
  print('a', a, n);
  print('b', b, n);
  
  return 0;
}

