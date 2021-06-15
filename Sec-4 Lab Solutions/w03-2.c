// Check whether a cubic polynomial has root(s) in an interval and its two sub-intervals

#include <stdio.h>

int main(){
  float a, b, c, d, u, v, w, fu, fv, fw;
  
  printf("Enter a, b, c, d: ");
  scanf("%f%f%f%f", &a, &b, &c, &d);
  printf("Enter u, v: ");
  scanf("%f%f", &u, &v);
  
  fu = a + b*u + c*u*u + d*u*u*u;
  fv = a + b*v + c*v*v + d*v*v*v;
  
  if (((fu <= 0) && (fv >= 0)) || ((fu >= 0) && (fv <= 0))){
    printf("[%f, %f]: YES\n", u, v);
    w = (u+v)/2;
    fu = a + b*u + c*u*u + d*u*u*u;
    fv = a + b*v + c*v*v + d*v*v*v;
    fw = a + b*w + c*w*w + d*w*w*w;
    if (((fu <= 0) && (fw >= 0)) || ((fu >= 0) && (fw <= 0)))
      printf("[%f, %f]: YES\n", u, w);
    else
      printf("[%f, %f]: NO\n", u, w);
    if (((fv <= 0) && (fw >= 0)) || ((fv >= 0) && (fw <= 0)))
      printf("[%f, %f]: YES\n", w, v);
    else
      printf("[%f, %f]: NO\n", w, v);
  }
  else
    printf("[%f, %f]: NO\n", u, v);
   
  return 0;
}

