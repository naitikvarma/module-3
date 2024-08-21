// Q  C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>

int main() 
{
    int Number;

    printf("\nEnter an integer =  ");
    scanf("%d", &Number);

    printf("First three powers of %d are:\n", Number);
    printf("%d^1 = %d\n", Number, Number);
    printf("%d^2 = %d\n", Number, Number * Number);
    printf("%d^3 = %d\n", Number, Number * Number * Number);

    return 0;
}
