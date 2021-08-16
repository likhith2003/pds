#include<stdio.h>
#include<math.h>

struct point{float x, y;};

float calculate_distance(struct point p, struct point q){
  return sqrtf((p.x-q.x)*(p.x-q.x) + (p.y-q.y)*(p.y-q.y));
}

int main(){
  int i, j, n;
  float d_final, d_current;
  struct point a[100];
  
  printf("Enter no. of points (2 to 100): ");
  scanf("%d", &n);
  
  printf("Enter (x,y) coordinates of the points:\n");
  for(i=0; i<n; i++)
    scanf("%f%f", &a[i].x, &a[i].y);
  
  d_final = calculate_distance(a[0], a[1]);
  
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      d_current = calculate_distance(a[i], a[j]);
      if (d_current < d_final)
        d_final = d_current;
    }
  }
  
  printf("Minimum inter-point distance = %f\n", d_final);
  
  return 0;
}
