#include<stdio.h>
#include<string.h> // for strstr()
#include<ctype.h>  // for toupper()

#define NUM_ITEMS 12

typedef struct{
  char name[20], unit[10]; 
  float price;
} item;

int main(){
  char key[20];
  int i, j, choice, qty;
  float toPay; 
  
  item s[] = { 
    {"BUTTER COOKIES",    "PACK",   25}, 
    {"CASHEW COOKIES",    "PACK",   30}, 
    {"CREAM CAKE",        "SLICE",  22}, 
    {"LEMON JUICE",       "LITRE",  35}, 
    {"VEG CASHEW CAKE",   "SLICE",  18}, 
    {"MANGO JUICE",       "LITRE",  78}, 
    {"COOKIES (PLAIN)",   "PACK",   15}, 
    {"ORANGE JUICE",      "LITRE",  72}, 
    {"MILK BISCUITS",     "PACK",   12}, 
    {"PLAIN VEG CAKE",    "SLICE",  20}, 
    {"BUTTER FRUIT CAKE", "SLICE",  25}, 
    {"PINEAPPLE JUICE",   "LITRE",  65}
  };

  printf("Enter a keyword: ");
  scanf("%s", key);
  for(i=0; key[i] != '\0'; i++) // make the key to uppercase
    key[i] = toupper(key[i]);
  
  printf("\n Items found matching with your keyword:\n");
  for(i=j=0; i<NUM_ITEMS; i++){
    if(strstr(s[i].name, key)){
      printf("%2d: %-20s --- Rs.%5.2f per %s\n", i+1, s[i].name, s[i].price, s[i].unit);
      j++;
    }
  }
  
  if(j==0){
    printf("Sorry, no such item is found...\n");
    return 1;
  }
  printf("\n");
  
  printf("Enter your choice: ");
  scanf("%d", &choice);
  printf("Enter the quantity: ");
  scanf("%d", &qty);
  toPay = qty * s[choice-1].price;
  printf("To pay (with GST) = Rs. %d.\n", (int)(toPay * 1.10 + 0.5));
     
  return 1;
  
}
