#include <stdio.h>

int main(){
    int number, sum1=0, i;

    printf("Enter your number: ");
    scanf("%d", &number);

    if(number % 2 == 0){
    	for (i=1; i<=number; i++)
        	sum1 += i;
        printf("The sum of first %d natural numbers is %d\n", number, sum1);

    }else{
    	for (i=1; i<=2*number; i++)
        	sum1 += i;
        printf("The sum of first %d natural numbers is %d\n", number*2, sum1);
    }
    return 0;
}
