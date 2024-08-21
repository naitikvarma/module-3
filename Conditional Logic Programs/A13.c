// Q.13 WAP to find minimum number among 3 numbers using ternary operator


#include <stdio.h>

int main() 
{
    int num1, num2, num3, min;

    printf("enter first number =");
    scanf("%d",&num1);	
    printf("\nenter second number =");
    scanf("%d",&num2);
    printf("\nenter three number =");
    scanf("%d",&num3);

    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

	printf("\nminimum number =%d",min);
    
    return 0;
}
