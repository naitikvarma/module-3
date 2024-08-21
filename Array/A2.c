#include <stdio.h>

// Function for addition
float add(float num1, float num2) 
{
    return num1 + num2;
}

// Function for subtraction
float subtract(float num1, float num2) 
{
    return num1 - num2;
}

// Function for multiplication
float multiply(float num1, float num2) 
{
    return num1 * num2;
}

// Function for division
float divide(float num1, float num2) 
{
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return 0; // Return 0 to indicate an error
    } else {
        return num1 / num2;
    }
}

int main() {
    int choice;
    float num1, num2, result;

    printf("Select operation:\n");
    printf("Press 1. Addition\n");
    printf("Press 2. Subtraction\n");
    printf("Press 3. Multiplication\n");
    printf("Press 4. Division\n");
    printf("Press 5. Exit\n");
    
    printf("Enter your choice = ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) 
	{
        printf("Enter first numbers =  ");
        scanf("%f", &num1);
        printf("Enter secound numbers =  ");
        scanf("%f", &num2);

        switch (choice) 
		{
            case 1:// Addition
                result = add(num1, num2);
                printf("%2f + %2f = %2f\n", num1, num2, result);
                break;
                
            case 2: // Subtraction
                result = subtract(num1, num2);
                printf("%2f - %2f = %2f\n", num1, num2, result);
                break;
                
            case 3: // Multiplication
                result = multiply(num1, num2);
                printf("%2f * %2f = %2f\n", num1, num2, result);
                break;
                
            case 4: // Division
                result = divide(num1, num2);
                if (result != 0) { // Check for division by zero error
                    printf("%2f / %2f = %2f\n", num1, num2, result);
                }
                break;
                
            default:
                printf("Invalid input.\n");
        }
    } else if (choice == 5) {
        printf("Exiting...\n");
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
