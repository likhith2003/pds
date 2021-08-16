/*
 Write a program that takes as input an integer array a[10] that stores n (= at most 10) elements
 (scanned during execution) and finds how many elements are out of order.
 An element a[i] is said to be in order if it is not smaller than a[0], a[1], ..., a[i-1]
 and not larger than a[i+1], a[i+2], ..., a[n-1].
 
      ./a.out    
      Enter number of elements: 1
      Enter 1 integers: 5
      Not in order = 0.

      $ ./a.out 
      Enter number of elements: 2
      Enter 2 integers: 5 7
      Not in order = 0.

      Enter number of elements: 2
      Enter 2 integers: 7 5
      Not in order = 2.
      $ ./a.out 

      Enter number of elements: 2
      Enter 2 integers: 5 5
      Not in order = 0.
      $ ./a.out 

      Enter number of elements: 4
      Enter 4 integers: 5 6 7 9
      Not in order = 0.
      $ ./a.out 

      Enter number of elements: 4
      Enter 4 integers: 6 5 7 9
      Not in order = 2.
      $ ./a.out 

      Enter number of elements: 4
      Enter 4 integers: 5 7 5 5
      Not in order = 3.
      $ ./a.out 

      Enter number of elements: 4
      Enter 4 integers: 5 5 7 5
      Not in order = 2.
      $ ./a.out 

      Enter number of elements: 7
      Enter 7 integers: 2 4 2 2 4 2 2
      Not in order = 6.
 
*/

#include <stdio.h>

int main(){
  int a[10], n, i, j, order, ans=0; 

  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter %d integers: ", n);
  for (i=0; i<n; i++)
    scanf("%d", &a[i]);
  
  for (i=0; i<n; i++){
    order = 0;
    for (j=0; j<i; j++){
      if(a[i] < a[j]){
        order = 1; ans++; break;
      }
    }
    for (j=i+1; order==0 && j<n; j++){
      if(a[i] > a[j]){
        order = 1; ans++; break;
      }
    }
  }
  
  printf("Not in order = %d.\n", ans);

  return 0;
}
