// Q.16  Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>

int main() 
{
    int num, i = 1, sum = 0;

    printf("Enter a positive integer = ");
    scanf("%d", &num);

    // Calculate the sum using a while loop
    while (i <= num) 
	{
        sum += i;
        i++;
    }

    printf("Sum of natural numbers up to %d: %d\n", num, sum);

    return 0;
}
