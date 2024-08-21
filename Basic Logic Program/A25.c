//Q Accept 5 expense from user and find average of expense

#include <stdio.h>

int main() 
{
    float expense[5], totalExpense = 0, averageExpense;
	int i;
    // Input 5 expenses
    for (i = 0; i < 5; i++) 
	{
    printf("Enter expense %d: ", i + 1);
    scanf("%f", &expense[i]);
    totalExpense += expense[i]; // Calculate total expense
    }

    // Calculate average expense
    averageExpense = totalExpense / 5;

    // Display results
    printf("Total expense: %2f\n", totalExpense);
    printf("Average expense: %2f\n", averageExpense);

    return 0;
}

