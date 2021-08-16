/* 
 Declare an integer array a[10].
 Let the user fill up this array when the program runs.
 After filling up, find the largest element.
 
    $ ./a.out 
    Enter 10 integers: 4 2 7 8 1 2 2 4 7 4
    Largest = 8.

*/

#include <stdio.h>

int main(){
  int a[10], max, i; 

  printf("Enter 10 integers: ");
  for(i=0; i<10; i++)
    scanf("%d", &a[i]);
  
  for(i=1, max=a[0]; i<10; i++)
    if(a[i] > max)
      max = a[i];

  printf("Largest = %d.\n", max);
  return 0;
}
