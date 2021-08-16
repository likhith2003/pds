// Strings, substrings, matching

#include<stdio.h>
#include <string.h>

int stringMatch(char s[], char t[]){
  int i=0;
  while(s[i]!='\0'){
    if(s[i]!=t[i])
      return 0;
    i++;
  }
  return 1;
}

int main(){
  char s[101], t[101], u[101];
  int i, m, n, p, q; // p = length of the smaller string = min(m,n), q=max(m,n)
  int nMatch=0; // number of appearances of s in t (t = longer string)
  
  printf("Enter 1st string: ");
  scanf ("%s", s);
  printf("Enter 2nd string: ");
  scanf ("%s", t);
  p = m = strlen(s), q = n = strlen(t);
  if(m>n){ // swap s and t
    strcpy(u, s); strcpy(s, t); strcpy(t, u);
    p = n, q = m;
  }
  
  for(i=0; i<=q-p; i++)
    if(stringMatch(s, t+i))
      nMatch++;
    
  printf("No. of matches = %d\n\n", nMatch);

  return 0;
}
