#include<stdio.h>

struct student{
  int roll;
  char name[50];
  char surname[50];
  int marks;
};

int main(){
  int i, n, min=0, max=0;
  struct student a[100];
  scanf("%d",&n);
  for(i=0; i<n; i++)
    scanf("%d%s%s%d", &a[i].roll, a[i].name, a[i].surname, &a[i].marks);
  
  for(i=1; i<n; i++){
    if(a[i].marks < a[min].marks)
      min = i;
    if(a[i].marks > a[max].marks)
      max = i;
  }
  
  printf("\nLowest:  %c. %-12s %d", a[min].name[0], a[min].surname, a[min].marks);
  printf("\nHighest: %c. %-12s %d\n", a[max].name[0], a[max].surname, a[max].marks);
  
  return 0;
}
