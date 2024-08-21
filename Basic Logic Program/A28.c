//Q .Convert years into days and months

#include <stdio.h>

int main() 
{
    int years, days, months;

    printf("\nEnter the number of years =  ");
    scanf("%d", &years);

    // Calculate days
    days = years * 365; // 1 years = 365days 

    // Calculate months
    months = years * 12; 

    printf("%d years is equal to:\n", years);
    printf("%d days\n", days);
    printf("%d months\n", months);

    return 0;
}
