#include<stdio.h>
#include<string.h>

struct menu{
  char name1[10], name2[10]; float price;};
  
void print_char(int n, char c){
  int i;
  for(i=0; i<25-n; i++) printf("%c", c);
}

int main(){
  int i, n;
  struct menu a[100];
  char query[10] = "veg";

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    scanf("%s%s%f", a[i].name1, a[i].name2, &a[i].price);
  
  for(i = 0; i < n; i++){
    printf("%2d: %s %s ", i+1, a[i].name1, a[i].name2);
    print_char(strlen(a[i].name1)+strlen(a[i].name2), '-');
    printf(" %5.2f\n", a[i].price*1.125);
  }
  
  print_char(-12, '=');
  printf("\n");
  for(i = 0; i < n; i++){
    if (!(strcmp(query, a[i].name1)) || !(strcmp(query, a[i].name2))){
      printf("%2d: %s %s ", i+1, a[i].name1, a[i].name2);
      print_char(strlen(a[i].name1)+strlen(a[i].name2), '-');
      printf(" %5.2f\n", a[i].price*1.125);
    }
  }
  print_char(-12, '=');
  printf("\n\n");
  
  return 0;
}
