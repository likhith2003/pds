// Write the season for a given date

#include <stdio.h>

int main(){
    int day, month, year;
    
    printf("Enter the day, month, year: ");
    scanf("%d%d%d", &day, &month, &year);
    
    switch(month){
      case 12: case 1: case 2: 
        printf("It's Winter!\n"); break;
      case 3: case 4: case 5: 
        printf("It's Summer!\n"); break;
      case 6: case 7: case 8: case 9: 
        printf("It's Monsoon!\n"); break;
      default: 
        printf("It's Autumn!\n"); break;
    }
  return 0;
}

