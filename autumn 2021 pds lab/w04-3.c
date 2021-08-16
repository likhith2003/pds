/* 
 Write a program that takes as input a name and a surname as strings, 
 and creates a string named fullname that will contain the name and the surname
 separated by a space.
 
      $ ./a.out 
      Enter the name: Isaac 
      Enter the surname: Newton
      Full name = Isaac Newton

      $ ./a.out 
      Enter the name: I.  
      Enter the surname: Newton
      Full name = I. Newton

*/

#include <stdio.h>
#include <string.h>

int main(){
  char name[100], surname[100], fullname[200];
  int l; // length of name

  printf("Enter the name: ");
  scanf("%s", name);
  l = (int)strlen(name);
  strcpy(fullname, name);
  fullname[l++] = ' ';
  fullname[l] = '\0';
  printf("Enter the surname: ");
  scanf("%s", surname);
  strcat(fullname, surname);
  
  printf("Full name = %s\n", fullname);
  return 0;
}
