//< Your Name>
//<Your Roll>
#include <stdio.h>
int main()
{
    //variable declarations
    float a,b,c,d,e,result;
    
    // take input for a
    printf("Enter value of a : ");
    scanf("%f",&a);
    
   // take input for b
    printf("Enter value of b : ");
    scanf("%f",&b);

  // take input for c
    printf("Enter value of c : ");
    scanf("%f",&c);

  // take input for d
    printf("Enter value of d : ");
    scanf("%f",&d);

  // take input for e
    printf("Enter value of e : ");
    scanf("%f",&e);
    
    //calculate the value of the expression and save in result
    result= ((a-b)*c)/(d+e);
    
    //print the result in the terminal
    printf("\nThe result of the expression : %f\n",result);
    
    return 0;
}

