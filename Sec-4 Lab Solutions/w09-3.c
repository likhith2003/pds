// Splitting a string into maximally periodic sub-strings. 
// Let the roll number be 20AE10031. 
// Then r = 31, or, r%11 + r%13 + 17 = 9 + 5 + 19 = 33, or, p = 31. 


// Time = O(n).

#include <stdio.h>

int slength(char *s){ // find the length of string s
  int i = 0;
  do{
    i++;}
  while(s[i]!= '\0');
  return i;
}

// period in s[i..j] = length of uniform s[i..k] s.t. k is max 
int find_period(char *s, int i, int j){ 
  int p = 1; 
  while((p < j-i+1) && (s[i] == s[i+p]))
    p++;
  return p;
}

int max_periodic_substr(char *s, int i, int j, int p){
  char a;
  int k, l, q = (j-i+1)/p, uniform; // q = #sub-strings of length p each
  
  for (l = 0; l < q; l++){ // for q sub-strings of length p each
    for (a = s[i+p*l], k = 1, uniform = 1; k < p; k++){ 
      if (a != s[i+p*l+k]){ // the sub-string is not uniform 
        uniform = 0; break;
      }
    }
    if(uniform){ // print the uniform sub-string 
      for (k = 0; k < p; k++)
        printf("%c", s[i+p*l+k]);
    }
    else // stop and return for further sub-strings 
      return i+p*l;
    
    if (i+p*l+p == j+1) // end of string 
      return j+1;
    if (a == s[i+p*l+p]) // longer than the period, so stop and return for further sub-strings 
      return i+p*l+p;
  }
  return i+p*q; // argue why
}

int main(){
  char s[102]; //the last two characters may be /n and /0, so 102. 
  int n, i, p; // p = period
  printf("Enter a string of at most 100 characters: ");
  scanf("%s", s);
  n = slength(s);
  if (n > 31) 
    n = 31, s[31] = '\0';
  printf("String under consideration = %s, length = %d\n", s, n);
  printf("Periodic sub-string split  = ");
  
  for(i=0; i<n; ){
    p = find_period(s, i, n-1);
    i = max_periodic_substr(s, i, n-1, p);
    printf("%c", (i==n)? '\n' : '-');
  }    
  
  return 1;
}

