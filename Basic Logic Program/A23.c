// Q WAP to calculate swap 2 numbers with using of multiplication and division.

#include <stdio.h>

int main() 
{
    int Num1,Num2;

    printf("\nEnter first number = ");
    scanf("%d", &Num1); // 15
    printf("\nEnter second number = ");
    scanf("%d", &Num2); // 20

    printf("\nBefore swapping:\n");
    printf("First number = %d\n", Num1); // 15
    printf("Second number = %d\n", Num2); // 20

    Num1 = Num1 * Num2; // 15*20 = 300
    Num2 = Num1 / Num2;  // 300/20 = 15 
	Num1 = Num1 / Num2;  // 300/15 = 20

    
    printf("\nAfter swapping using multiplication and division:\n");
    printf("\nFirst number = %d", Num1); // 20
    printf("\nSecond number = %d", Num2); // 15

    return 0;
}	
