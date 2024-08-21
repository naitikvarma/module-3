// Q.12 WAP to find maximum number among 3 numbers using ternary operator.

#include <stdio.h>


int main() 
{
    int num1, num2, num3, max;
	
    printf("enter first number =");
    scanf("%d",&num1);	
    printf("\nenter second number =");
    scanf("%d",&num2);
    printf("\nenter three number =");
    scanf("%d",&num3);

    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("\nmaximum number =%d",max);
    
    return 0;
}

