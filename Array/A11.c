/* Q.11 WAP to accept 5 numbers from user and display in reverse order using for
loop and array */

#include <stdio.h>
 
int main() 
{
    int numbers[5] , i;
 
    // Input the numbers
    printf("Enter 5 numbers = \n");
    for (i = 0; i < 5; i++) 
	{
        scanf("%d", &numbers[i]);
    }
 
    // Display the numbers in reverse order
    printf("\nNumbers in reverse order = \n");
    for (i = 4; i >= 0; i--) 
	{
        printf("%d ", numbers[i]);
    }
 
    printf("\n");
 
    return 0;
}
