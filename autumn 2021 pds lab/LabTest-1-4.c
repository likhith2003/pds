#include <stdio.h>
#include <math.h> // for powf()

int main(){
  int c[10], d[10], e[20], p[10], q[10], r[20];
  int m, n, i, j, k;
  float x, sx;
  
  printf("Enter m: "); scanf("%d", &m);
  printf("Enter n: "); scanf("%d", &n);
  
  printf("\nEnter f(x):\n");
  for(i=0; i<m; i++){
    printf("coefficient of term %d: ", i+1); scanf("%d", &c[i]);
    printf("power of term %d: ", i+1); scanf("%d", &p[i]);
  }
  
  printf("\nEnter g(x):\n");
  for(i=0; i<n; i++){
    printf("coefficient of term %d: ", i+1); scanf("%d", &d[i]);
    printf("power of term %d: ", i+1); scanf("%d", &q[i]);
  }
  
  i=j=k=0;
  
  do{
    if(p[i]==q[j]){
      r[k] = p[i]; e[k] = c[i]+d[j]; i++, j++, k++;}
    else if(p[i]<q[j]){
      r[k] = p[i]; e[k] = c[i]; i++, k++;}
    else{
      r[k] = q[j]; e[k] = d[j]; j++, k++;}
  } while(i<m && j<n);
  
  while(i<m){
    e[k] = c[i]; r[k] = p[i]; i++, k++;
  }
    
  while(j<n){
    e[k] = d[j]; r[k] = q[j]; j++, k++;
  }
  
  // So, k = number of terms in sum.
  
  // Now print the polynomials.
  
  printf("\nf(x) = ");
  if(p[0]==0) printf("%d", c[0]);
  else if(c[0]==-1) printf("-x^%d", p[0]);
  else if(c[0]== 1) printf("x^%d", p[0]);
  else printf("%dx^%d", c[0], p[0]);
  for(i=1;i<m;i++){
    if(c[i]<0){ 
      printf(" - "); 
      if(c[i]==-1) 
        printf("x^%d", p[i]);
      else
        printf("%dx^%d", -c[i], p[i]);
    }
    else{
      printf(" + "); 
      if(c[i]==1) 
        printf("x^%d", p[i]);
      else
        printf("%dx^%d",  c[i], p[i]);
    }
  }
  printf("\n");
  
  printf("g(x) = ");
  if(q[0]==0) printf("%d", d[0]);
  else if(d[0]==-1) printf("-x^%d", q[0]);
  else if(d[0]== 1) printf("x^%d", q[0]);
  else printf("%dx^%d", d[0], q[0]);
  for(i=1;i<n;i++){
    if(d[i]<0){ 
      printf(" - "); 
      if(d[i]==-1) 
        printf("x^%d", q[i]);
      else
        printf("%dx^%d", -d[i], q[i]);
    }
    else{
      printf(" + "); 
      if(d[i]==1) 
        printf("x^%d", q[i]);
      else
        printf("%dx^%d", d[i], q[i]);
    }
  }
  printf("\n");
  
  printf("s(x) = ");
  if(r[0]==0) printf("%d", e[0]);
  else if(e[0]==-1) printf("-x^%d", r[0]);
  else if(e[0]== 1) printf("x^%d", r[0]);
  else printf("%dx^%d", e[0], r[0]);
  for(i=1;i<k;i++){
    if(e[i]<0){ 
      printf(" - "); 
      if(e[i]==-1) 
        printf("x^%d", r[i]);
      else
        printf("%dx^%d", -e[i], r[i]);
    }
    else{
      printf(" + "); 
      if(e[i]==1) 
        printf("x^%d", r[i]);
      else
        printf("%dx^%d",  e[i], r[i]);
    }
  }
  printf("\n");

  printf("Enter x: "); scanf("%f", &x);
  
  for(sx=0.0, i=0; i<k; i++)
    sx += e[i] * powf(x, (float)r[i]);
  
  printf("s(x) = %f\n", sx);
  
  return 0;
}
