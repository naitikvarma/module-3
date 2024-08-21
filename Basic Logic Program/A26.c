//Q .Convert temperature Fahrenheit to Celsius

#include <stdio.h>

int main() 
{
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9; //°c = (°f-32)* 9/5 is per stander formula. 

    printf("%2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);

    return 0;
}
