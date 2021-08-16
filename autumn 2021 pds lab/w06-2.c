#include <stdio.h>
//#include <string.h>
#define MAX_SIZE 100


void remove_non_alphanum(char str[])
{
	int i=0, j;
	while (str[i]!='\0')
	{
		if ((str[i] < 48) || (str[i] > 57 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122))
		{
			j=i;
			while (str[j]!='\0')
			{	
				str[j] = str[j+1]; // Note that the null character also gets shifted left
				// printf("i = %d, str[j] = %c, str[j+1] = %c\n", i,str[j], str[j+1]);
				j++;
			}
		}
		else // As the shifted character in the right can also be a non-alpha-numeric character, increase i only when the shifted or non-shifted even, character is alpha-numeric
			i++;
	}
	str[i]='\0';
	printf("The string with non alpha-numeric characters removed: %s\n", str);
}


int main(void){
    char original[MAX_SIZE];
    
    printf("Please enter the string: ");
    // scanf ("%[^\n]”, original);
    scanf ("%s", original);

    remove_non_alphanum(original);

}