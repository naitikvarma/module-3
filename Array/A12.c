/* Q 12 WAP to accept 5 students name and store it in array */

#include <stdio.h>

int main() 
{
    char students[5][100];
    int i;
    printf("Enter 5 student names.\n");
    for ( i = 0; i < 5; i++) 
	{
        printf("Student %d =",i+1);
        scanf("%s", students[i]);
    }

    printf("\nStudent names =\n");
    for ( i = 0; i < 5; i++) 
	{
        printf("%d. %s\n",i+1,students[i]);
    }

    return 0;
}
