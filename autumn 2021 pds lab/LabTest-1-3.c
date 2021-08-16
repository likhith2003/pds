/*
User gives two strings s and t as input.
Assume that the length of each string is at most 100.
Your program has to check whether s is a sub-string of t and print "Yes" or "No" accordingly.
While checking, it should not differentiate between uppercase and lowercase.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h> // needed for toupper()

int main() {
  char s[101], t[101];
  int m, n, i, j, match=0; 
  
  printf("Enter t: "); scanf("%s", t);
  printf("Enter s: "); scanf("%s", s);
  
  m = strlen(s), n = strlen(t);
  
  for(i=0; i<=n-m; i++){
    for(match=j=0; j<m; j++){
      if(toupper(s[j]) == toupper(t[i+j])) 
        match++;
    }
    if(match == m)
      break;
  }
  if(match == m)
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}
