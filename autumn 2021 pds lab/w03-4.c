/* 
In an automobile company, the number of cars manufactured on a day depends on which day 
of the week it is. 
Monday means Day 1, Tuesday means Day 2, ..., Sunday means Day 7.
Let n be the number of cars manufactured on a day. 
For Day 1, n is given by the number of available machines (say m, which is a user input). 
For Day 2, n is 7m/4, rounded off to the nearest integer. 
For Day 3 and Day 6, k machines (k is user input) are kept out for maintenance, 
and so n becomes 7(m-k)/4, rounded off to the nearest integer.
For the other days, n is m plus a boosting factor f of m, rounded off to the nearest integer;
assume that f is a positive real number less than 1 and taken as user input.
Given the week day (1 to 7) as input, find the number of manufactured cars (n) on that day.
You should use switch-case statements.
*/

#include <stdio.h>

int main(){
	int day, n, m, k;
    float f;
    
    printf("Enter the number of machines: ");
    scanf("%d", &m);
    printf("Enter the day number (1-7): ");
    scanf("%d", &day);
	
	switch(day){
		case 1: n = m; 
		        break;
				
		case 2: n = (float)m*1.75 + 0.5; 
		        break;
				
		case 3: 
		case 6: printf("Enter no. of machines under maintenance: ");
		        scanf("%d", &k);
			    m = m-k;
				n = (float)m*1.75 + 0.5; 
		        break;
		        
		default: printf("Enter boosting factor: ");
		        scanf("%f", &f);
			    n = (float)m*(1.0+f) + 0.5;
		        break;
	}
	
	printf("Number of manufactured cars = %d.\n\n", n);

    return 1;
}


