//Q.10 WAP to check whether a number is negative, positive or zero.

#include <stdio.h>

int main() 
{
    int number;

    printf("\nEnter a number =  ");
    scanf("%d", &number);

    if (number > 0) 
	{
        printf("%d is a positive number.\n", number);
    } 
	else if (number < 0) 
	{
        printf("%d is a negative number.\n", number);
    } 
	else 
	{
        printf("%d is zero.\n", number);
    }

    return 0;
}
