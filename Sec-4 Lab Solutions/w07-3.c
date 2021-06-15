// dot product and cross product for two 3D vectors

#include<stdio.h>

typedef struct {int x, y, z;} vector;

int dot_product(vector a, vector b){
  return (a.x)*(b.x) + (a.y)*(b.y) + (a.z)*(b.z);
}    

vector cross_product(vector a, vector b){
  vector c;
  c.x = a.y * b.z - a.z * b.y; 
  c.y = a.z * b.x - a.x * b.z; 
  c.z = a.x * b.y - a.y * b.x;
  return c;
}    

int main(){
  int x, y, z;
  vector a, b, c;
  
  printf("Enter vector a: ");
  scanf("%d%d%d", &a.x, &a.y, &a.z);
  printf("Enter vector b: ");
  scanf("%d%d%d", &b.x, &b.y, &b.z);
  
  printf("Dot product = %d.\n", dot_product(a, b));
  c = cross_product(a, b);
  printf("Cross product = (%d, %d, %d).\n", c.x, c.y, c.z);
  
  return 1;
}

