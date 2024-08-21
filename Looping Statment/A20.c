/* Q.20 WAP program to print below output using for loop
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
..............
..............
41 42 43 44 45 46 47 48 49 50 */

#include<stdio.h>
 
int main() 
{
    int i, j;
 
    // Loop through each row
    for (i = 0; i < 5; i++) 
	{ 
        // Loop through each number in a row
        for (j = 1; j <= 10; j++) 
		{
            // Print the number with leading zero if needed
            if (j > 0 && j < 10) 
			{
                printf("0%d ", i * 10 + j); 
            }
			else 
			{
                printf("%d ", i * 10 + j);
            }
        }
        printf("\n"); // Move to the next line
    }
 
    return 0;
}
