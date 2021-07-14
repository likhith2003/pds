#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char n[20], s[20]; float c; // name, surname, cgpa
}student;

void printDash(int n){
  for(int i=0; i<n; i++)
    printf("-");
}

int binary_search(student a[], int l, int r, float x){ 
  int mid = (r+l)/2; 

  if (x <= a[l].c)
    return l; // all are okay 
    
  if (x > a[r].c)
    return r+1; // none is okay
    
  if (a[mid].c == x) // mid onward are okay
    return mid; 
  
  if (a[mid].c < x && mid+1 <=r) // mid+1 onward are okay
    if (a[mid+1].c >= x) 
      return mid+1; 
    
  if (a[mid].c > x) // search in left of mid 
    return binary_search(a, l, mid-1, x); 
  
  return binary_search(a, mid+1, r, x); // search in right of mid 
} 

void print(student a[], int n, int j){
  int i;
  printf("\nStudents with cgpa >= cut-off:\n");
  if (j==n){
    printf("Empty!\n\n");
    return;
  }
  for(i=j; i<n; i++){
    printf("%2d. %s %s ", i+1, a[i].n, a[i].s);
    printDash(30-(strlen(a[i].n)+strlen(a[i].s)));
    printf(" %5.2f\n", a[i].c);
  }
}

int main(){
  int n, i, j, max;
  float x;
  student *a;

  printf("Enter #students: "); scanf("%d", &n);

  a=(student *)malloc(n*sizeof(student));  

  printf("Enter the name, surname, and cgpa:\n");
  for(i=0; i<n; i++)
    scanf("%s%s%f", a[i].n, a[i].s, &a[i].c);
  
  printf("\nEnter the cut-off cgpa: ");
  scanf("%f", &x);
  
  j = binary_search(a, 0, n-1, x);
  print(a, n, j);
  
  return 1;
}

