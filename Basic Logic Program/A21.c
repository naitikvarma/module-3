// Q. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

#include <stdio.h>

int main() {
    int Num1, Num2;

    printf("\nEnter the first number = ");
    scanf("%d", &Num1);

    printf("Enter the second number = ");
    scanf("%d", &Num2);

    // Swapping with a third variable
    printf("\nSwapping with a third variable:\n");
    int temp = Num1; // Store the value of num1 in a temporary variable
    Num1 = Num2;    // Assign the value of num2 to num1
    Num2 = temp;    // Assign the value of temp (originally num1) to num2

    printf("First number: %d\n", Num1);
    printf("Second number: %d\n", Num2);

    // Swapping without a third variable
    printf("\nSwapping without a third variable:\n");
    Num1 = Num1 + Num2; // Add the two numbers
    Num2 = Num1 - Num2; // Subtract num2 from the sum to get the original value of num1
    Num1 = Num1 - Num2; // Subtract num2 from the sum again to get the original value of num2

    printf("First number: %d\n", Num1);
    printf("Second number: %d\n", Num2);

    return 0;
}
