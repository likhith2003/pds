#include <stdio.h>
int rev_num;
int reverse(int N)
{
	int rem, reverse_number=0;
	while (N>0)
	{
		rem = N%10;
    	reverse_number = reverse_number*10 + rem;
    	N=N/10;
	}
	return reverse_number;
}

int reverse_recursive(int N)
{
	int rem;
	if (N>0)
	{
		// printf("%d\n",N);
		rem = N%10;
		rev_num = rev_num*10 + rem;
    	reverse_recursive(N/10);
	}
	return rev_num;
}

int main(void){
    int num, reverse_num;
    
    printf("Please provide the positive integer to be reversed: ");
    scanf("%d",&num);
    reverse_num = reverse_recursive(num);
    printf("The reverse of %d using \"reverse_recursive\" is: %d\n", num, reverse_num);
    reverse_num = reverse(num);
    printf("The reverse of %d using \"reverse\" is: %d\n", num, reverse_num);
}