/* Q.13 WAP to accept 5 numbers from user and check entered number is even or odd
using of array */

#include<stdio.h>

int main() 
{
    int numbers[5];
    int i;

    // Input the numbers
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
	{
        scanf("%d", &numbers[i]);
    }

    // Check and display even or odd for each number
    printf("\nEven or Odd for each number:\n");
    for (i = 0; i < 5; i++) 
	{
        if (numbers[i] % 2 == 0) 
		{
            printf("%d is even\n", numbers[i]);
        } 
		else 
		{
            printf("%d is odd\n", numbers[i]);
        }
    }

    return 0;
}
