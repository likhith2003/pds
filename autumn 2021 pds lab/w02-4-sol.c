//< Your Name>
//<Your Roll>
#include <stdio.h>

int main()
{
    //variable declarations
    int actual,reverse,last,middle,first;
    
    // take a 3 digit number as input
    printf("Enter a 3 digit number : ");
    scanf("%d",&actual);
    
    // extract the last digit
    last=actual%10;
    actual=actual/10;
    
    // extract the middle digit
    middle=actual%10;
    actual=actual/10;
    
    // extract the first digit
    first=actual%10;
 
    //construct the reverse number
    reverse=last*100 + middle*10 + first;
    
    //print the reverse number
    printf("\n Reverse number = %d\n",reverse);
    
    return 0;
}
