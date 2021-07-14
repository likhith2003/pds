// insertion sort

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char n[20], s[20]; float c; // name, surname, cgpa
}student;

void printLine(){
  int i; printf("\n"); for(i=1; i<43; i++) printf("-"); printf("\n");}
  
void printDash(int n){
  for(int i=0; i<n; i++)
    printf("-");
}
    
void insertionSort(student *a, int n){
   int i, j; 
   student x;
   for (i = 1; i < n; i++){
       strcpy(x.n, a[i].n), strcpy(x.s, a[i].s), x.c = a[i].c;
       j = i-1; 
       while (j >= 0 && a[j].c > x.c){ 
           strcpy(a[j+1].n, a[j].n), strcpy(a[j+1].s, a[j].s), a[j+1].c = a[j].c; 
           j = j-1; 
       } 
       strcpy(a[j+1].n, x.n), strcpy(a[j+1].s, x.s), a[j+1].c = x.c; 
   } 
} 
 
int main(){
  int n, i;
  student *a;
  
  printf("Enter #students: ");
  scanf("%d", &n);
  a = (student *)malloc(n * sizeof(student));
  
  printf("Enter student name, surname, cgpa: \n");
  for(i=0; i<n; i++)
    scanf("%s%s%f", a[i].n, a[i].s, &a[i].c);
  
  printLine();
  printf("BEFORE SORTING:\n\n");
  for(i=0; i<n; i++){
    printf("%2d. %s %s ", i+1, a[i].n, a[i].s);
    printDash(30-(strlen(a[i].n)+strlen(a[i].s)));
    printf(" %5.2f\n", a[i].c);
  }
  
  insertionSort(a, n);
  
  printLine();
  printf("AFTER SORTING:\n\n");
  for(i=0; i<n; i++){
    printf("%2d. %s %s ", i+1, a[i].n, a[i].s);
    printDash(30-(strlen(a[i].n)+strlen(a[i].s)));
    printf(" %5.2f\n", a[i].c);
  }
    
  return 1;
}
