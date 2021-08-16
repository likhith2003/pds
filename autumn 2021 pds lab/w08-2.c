// Swapping two records with the same structure

#include <stdio.h>
#include <string.h>

struct student{
  char name[15], surname[15];
  float cgpa;
};

void swap(struct student *a, struct student *b){
  char t[15]; float c;
  
  strcpy(t, a->name); 
  strcpy(a->name, b->name);
  strcpy(b->name, t);
  strcpy(t, a->surname); 
  strcpy(a->surname, b->surname);
  strcpy(b->surname, t);
  c = a->cgpa; a->cgpa = b->cgpa; b->cgpa = c;
}
  
int main(){
  struct student a, b;
  
  printf("Enter the name, surname, CGPA of 1st student: "); 
  scanf("%s%s%f", a.name, a.surname, &a.cgpa);
  printf("Enter the name, surname, CGPA of 2nd student: "); 
  scanf("%s%s%f", b.name, b.surname, &b.cgpa);
  
  swap(&a, &b);
  
  printf("\nAfter swapping:\n\n");
  
  printf("Student 1: %s %s %4.2f\n",   a.name, a.surname, a.cgpa);
  printf("Student 2: %s %s %4.2f\n\n", b.name, b.surname, b.cgpa);
  
  return 0;
}
