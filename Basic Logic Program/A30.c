// Q WAP to convert years into days and days into years

#include <stdio.h>

int main() {
    int choice;
    int years, days;

    printf("\nEnter 1 to convert years into days.\n");
    printf("\nEnter 2 to convert days into years.\n");
    printf("\nEnter your choice = ");
    scanf("%d", &choice);

    if (choice == 1) 
	{
        printf("Enter number of years: ");
        scanf("%d", &years);

        days = years * 365; // 365 days in a year * year
        printf("%2d years is equal to %2d days.\n", years, days);
        
    } else if (choice == 2) {
        printf("\nEnter number of days = ");
        scanf("%d", &days);

        years = days / 365; // Total days divided by 365 days
        printf("%2d days is equal to %2d years.\n", days, years);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
