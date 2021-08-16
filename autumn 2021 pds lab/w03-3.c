#include <stdio.h>

int main(){
    int year, leap;
    
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
      leap = 1;
    else if (year % 100 == 0)
      leap = 0;
    else if (year % 4 == 0)
      leap = 1;
    else leap = 0;

    if (leap)
      printf("Year %d is a leap year.\n\n", year);
    else 
      printf("Year %d is not a leap year.\n\n", year);

    return 1;
}


