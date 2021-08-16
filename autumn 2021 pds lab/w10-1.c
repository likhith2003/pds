#include<stdio.h>
#include<string.h>

int main(){
  char f1[20], f2[20];
  FILE *fp1, *fp2;
  int x, i;
  
  strcpy(f1, "w10-1-in.txt");
  strcpy(f2, "w10-1-out.txt");
  
  fp1 = fopen(f1, "r");
  fp2 = fopen(f2, "w");
  
  do{
    fscanf(fp1, "%d", &x);
    if(x==0) break;
    for(i=0; i<x; i++)
      fprintf(fp2, "*");
    fprintf(fp2, "\n"); 
  }while(1);
  
  return 1;
}
