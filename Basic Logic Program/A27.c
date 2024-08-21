//Q Convert days into months

#include<stdio.h>

int main()
{
	int days , months;
	printf("\nEnter the number of days = ");
    scanf("%d", &days);

    // Calculate months
    months = days / 30; // Assuming an average month has 30 days

  

    printf("%d days is equal to:\n", days);
    printf("%d months\n", months);
   

    return 0;
}
