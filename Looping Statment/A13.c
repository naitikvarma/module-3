// Q.13 calculate the Factorial of a Given Number using while loop

#include <stdio.h>

int main() 
{
    int num, i = 1, factorial = 1;

    printf("Enter a non-negative integer = ");
    scanf("%d", &num);

    // Calculate the factorial using a while loop
    while (i <= num) 
	{
        factorial *= i; 
        i++;
    }

    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}
