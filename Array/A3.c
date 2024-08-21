/* Q.5  WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice */

#include <stdio.h>

int main() 
{
    int a, b, choice,i,j,order;
    printf("Enter size of first array = ");
    scanf("%d", &a);
    int arr1[a];
    printf("Enter %d numbers =\n", a);
    for (i = 0; i < a; i++)
    scanf("%d", &arr1[i]);

    printf("Enter size of second array = ");
    scanf("%d", &b);
    int arr2[b];
    printf("Enter %d numbers =\n", b);
    for (i = 0; i < b; i++)
        scanf("%d", &arr2[i]);

   printf("Choose sorting order:\n");
   printf("1. Ascending\n");
   printf("2. Descending\n");
   printf("Enter any one choice: ");
   scanf("%d", &order);

    // Sort first array
    if (choice == 1) 
	{
        for (i = 0; i < a - 1; i++) 
		{
            for ( j = i + 1; j < a; j++) 
			{
                if (arr1[i] > arr1[j]) 
				{
                    int temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
    } 
	
	else if (choice == 2) 
	{
        for (i = 0; i < a - 1; i++) 
		{
            for (j = i + 1; j < a; j++) 
			{
                if (arr1[i] < arr1[j]) 
				{
                    int temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                 }
             }
        }
    }

    // Sort second array
    if (choice == 1) 
	{
        for (i = 0; i < b - 1; i++) 
		{
            for (j = i + 1; j < b; j++) 
			{
                if (arr2[i] > arr2[j]) 
				{
                    int temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
    } 
	
	else if (choice == 2) 
	{
        for (i = 0; i < b - 1; i++) 
		{
            for ( j = i + 1; j < b; j++) 
			{
                if (arr2[i] < arr2[j]) 
				{
                    int temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
    }

    printf("Sorted first array = ");
    for ( i = 0; i < a; i++)
    	printf("%d ", arr1[i]);
    printf("\n");

    printf("Sorted second array = ");
    for ( i = 0; i < b; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}

// Noted: I've done this question with the help of my friend.

