/* Q.15 Store 5 numbers in array and sort it in ascending order */

#include <stdio.h>
 
int main() 
{
    int numbers[5];
    int i, j, temp;
 
    // Input the numbers
    printf("Enter any 5 numbers sort them in ascending order =\n");
    for (i = 0; i < 5; i++) 
	{
        scanf("%d", &numbers[i]);
    }
 
    // Sort the array in ascending order 
    for (i = 0; i < 4; i++) 
	{ 
        for (j = 0; j < 4 - i; j++) 
		{
            if (numbers[j] > numbers[j + 1]) 
			{
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
 
    // Display the sorted array
    printf("\nSorted numbers in ascending order:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", numbers[i]);
    }
    printf("\n");
 
    return 0;
}
