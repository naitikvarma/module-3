// Q.11 WAP to find number is even or odd using ternary operator

#include <stdio.h>

int main() 
{
    int Number;

    printf("\nEnter a number = ");
    scanf("%d", &Number);

    (Number % 2 == 0) ? printf("%d is even\n", Number) : printf("%d is odd\n", Number);

    return 0;
}
