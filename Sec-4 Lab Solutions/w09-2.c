// Rectangle displaying, with roll number = "75"
// MAX = (75%7 + 75%11) + 40 = 5 + 9 + 40 = 54

#include<stdio.h>
#include<stdlib.h>

#define MAX 54

typedef struct{
  int x1, y1, x2, y2; // bottom-left and top-right coordinates
} rect;

int main(){
  rect *r;
  int n, i, depth, h, w; // depth 0 means outside all rectangles
  
  printf("Enter #rectangles: "); scanf("%d", &n);
  r = (rect *)malloc(n*sizeof(rect));
  if (r == NULL){
    printf("Memory allocation is not possible...\n");
    exit(0);
  }
  
  printf("Enter BOTTOM-LEFT and TOP-RIGHT coordinates (value: 1 to %d):\n", MAX);
  
  for(i=0; i<n; i++)
      scanf("%d%d%d%d", &r[i].x1, &r[i].y1, &r[i].x2, &r[i].y2);
  
  for(h=1; h<=MAX; h++){ // MAX by MAX window
    printf("\n");
    for(w=1; w<=MAX; w++){
      depth = 0;
      for(i=0; i<n; i++){ // adjust coordinate system properly :) 
        if(r[i].x1 <= w && w <= r[i].x2 && r[i].y1 <= MAX-h && MAX-h <= r[i].y2)
          depth++; // depth = #rectangles containing the point
      }
      if (depth==0)
        printf("%c", MAX); // ASCII value = MAX
      else
        printf(" "); 
    }
  }
  
  printf("\n");
  
  return 0;
}
