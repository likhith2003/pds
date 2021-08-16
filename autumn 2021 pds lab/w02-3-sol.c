
//< Your Name>
//<Your Roll>

#include <stdio.h>
#include <math.h>

int main()
{
    //variable declarations
    float first_x,first_y,second_x,second_y,distance;
    
    // take input for coordinates of the first point
    printf("Enter the coordinates of the first point : ");
    scanf("%f%f",&first_x,&first_y);
    
   // take input for coordinates of the second point
    printf("\nEnter the coordinates of the second point : ");
    scanf("%f%f",&second_x,&second_y);
    
    
    //calculate the distance between the two points
    distance=(first_x-second_x)*(first_x-second_x) + (first_y-second_y)*(first_y-second_y);
    distance=sqrt(distance);
    
    //print the distance value in the terminal
    printf("\nDistance = %f\n",distance);
    
    return 0;
}

