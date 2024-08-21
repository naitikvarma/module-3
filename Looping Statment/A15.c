// Q.15 Calculate sum of 10 numbers using of while loop

#include <stdio.h>

int main() 
{
    int num, sum = 0, count = 1;

    while (count <= 10) 
	{
        printf("Enter number %d = ", count);
        scanf("%d", &num);

        sum += num; 
        count++;   
    }

    printf("Sum of the 10 numbers = %d\n", sum);

    return 0;
}
