// Triangles displaying

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define YMAX 21
#define XMAX 41
#define ERR  .001 // a small error tolerance 

typedef struct{
  int x, y;
} point;

typedef struct{
  point v[3];
} triangle;

double calArea(triangle t){
  double area, a[3], s;
  int j;
  
  for(s=0, j=0; j<3; j++){
    a[j] = sqrt((double)((t.v[j].x-t.v[(j+1)%3].x) * (t.v[j].x-t.v[(j+1)%3].x) +
                         (t.v[j].y-t.v[(j+1)%3].y) * (t.v[j].y-t.v[(j+1)%3].y)));
    s += a[j];
  }
  s = s/2.0;
  area = s*(s-a[0])*(s-a[1])*(s-a[2]); 
  if (area<0) // computer error -- very small negative value may occur!
    area = 0;
  else 
    area = sqrt(s*(s-a[0])*(s-a[1])*(s-a[2])); // Heron's formula
    
  return area;
}

int main(){
  int n, i, j, h, w, label;
  triangle t[9], u;
  double area, sumArea;
  
  printf("Enter #triangles: "); scanf("%d", &n);
  
  printf("Enter triangle coordinates:\n");
  
  for(i=0; i<n; i++){
    for(j=0; j<3; j++)
      scanf("%d%d", &t[i].v[j].x, &t[i].v[j].y);
  }
  
  for(h=0; h<YMAX; h++){
    printf("\n");
    u.v[0].y = YMAX-h-1;
    for(w=0; w<XMAX; w++){
      u.v[0].x = w;
      label = -1;
      for(i=0; i<n; i++){ // sum up the areas of three triangles formed by 
                          // by joining the point u.v[0] with two vertices of t[i] at a time.
        u.v[1].x = t[i].v[0].x, u.v[1].y = t[i].v[0].y; 
        u.v[2].x = t[i].v[1].x, u.v[2].y = t[i].v[1].y; 
        sumArea  = calArea(u);
        u.v[1].x = t[i].v[1].x, u.v[1].y = t[i].v[1].y; 
        u.v[2].x = t[i].v[2].x, u.v[2].y = t[i].v[2].y; 
        sumArea += calArea(u);
        u.v[1].x = t[i].v[0].x, u.v[1].y = t[i].v[0].y; 
        u.v[2].x = t[i].v[2].x, u.v[2].y = t[i].v[2].y; 
        sumArea += calArea(u);
        area = calArea(t[i]); // area of t[i] 
        if (area >= sumArea - ERR && area <= sumArea + ERR){ 
          label = i;
          break;}
      }
      if (label != -1)
        printf("%d", label+1); 
      else
        printf(" "); 
    }
  }
  
  printf("\n");
  
  return 0;
}
