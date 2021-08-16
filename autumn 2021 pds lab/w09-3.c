#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu{
  char name[50]; int marks;};

int binary_search(struct stu a[], int l, int r, int x){ 
  int mid = (r+l)/2; 

  if (x <= a[l].marks)
    return l; // all are okay 
    
  if (x > a[r].marks)
    return r+1; // none is okay
    
  if (a[mid].marks == x) // mid onwards are okay
    return mid; 
  
  if (a[mid].marks < x && mid+1 <=r) // mid+1 onwards are okay
    if (a[mid+1].marks >= x) 
      return mid+1; 
    
  if (a[mid].marks > x) // search in left of mid 
    return binary_search(a, l, mid-1, x); 
  
  return binary_search(a, mid+1, r, x); // search in right of mid 
} 

void print(struct stu a[], int n, int j){
  int i;
  printf("\nStudents with at least cut-off marks:\n");
  if (j==n){
    printf("Empty!\n\n");
    return;
  }
  for(i=j; i<n; i++)
    printf("%-10s %d\n", a[i].name, a[i].marks);
  printf("\n");
}

int main(){
  int n, i, j, max, x;
  struct stu *a;

  printf("Enter #students: "); scanf("%d", &n);

  a=(struct stu *)malloc(n*sizeof(struct stu));  

  printf("Enter the names and marks:\n");
  for(i=0; i<n; i++)
    scanf("%s%d", a[i].name, &a[i].marks);
  
  printf("\nEnter the cut-off marks: ");
  scanf("%d", &x);
  
  j = binary_search(a, 0, n-1, x);
  print(a, n, j);
  
  return 0;
}

