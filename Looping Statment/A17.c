/* Q.17 Calculate 5 numbers from user and calculate number of even and odd using
of while loop */

#include <stdio.h>

int main() 
{
    int num, evenCount = 0, oddCount = 0, count = 1;

    while (count <= 5) {
        printf("Enter number %d = ", count);
        scanf("%d", &num);

        if (num % 2 == 0) 
		{
            evenCount++;
        } 
		else 
		{
            oddCount++;
        }

        count++;
    }

    printf("\nNumber of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}
