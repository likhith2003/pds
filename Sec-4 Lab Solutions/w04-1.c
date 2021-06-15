// Find min and max among 6 elements, using at most one extra variable and fewest comparisons.
// No extra variable, 7 comparisons.

#include <stdio.h>

int main(){
  int x1, x2, x3, x4, x5, x6;
  
  printf("Enter six integers: ");
  scanf("%d%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5, &x6);
  
  // find the min and max of 3 pairs: (x1, x2), (x3, x4), (x5, x6)
  // and store their min values in x1, x3, x5, and max values in x2, x4, x6.
  // #comparisons = 3.
  
  if(x1 > x2){
    x1 = x1+x2; x2 = x1-x2; x1 = x1-x2;
  }
  
  if(x3 > x4){
    x3 = x3+x4; x4 = x3-x4; x3 = x3-x4;
  }
  
  if(x5 > x6){
    x5 = x5+x6; x6 = x5-x6; x1 = x5-x6;
  }
  
  // find min{x1, x3, x5} and store in x1.
  // find max{x2, x4, x6} and store in x2.
  // #comparisons = 2 + 2.
  
  x1 = (x1 < x3) ? x1 : x3;
  x1 = (x1 < x5) ? x1 : x5;
  
  x2 = (x4 > x2) ? x4 : x2;
  x2 = (x6 > x2) ? x6 : x2;
  
  printf("Min, Max = %d, %d\n", x1, x2);
    
  return 1;
}

