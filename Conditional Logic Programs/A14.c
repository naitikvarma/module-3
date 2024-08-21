// Q.14 WAP to find the largest of three numbers

#include<stdio.h>

int main() 
{
    int num1, num2, num3;

    printf("enter first number =");
    scanf("%d",&num1);	
    printf("\nenter second number =");
    scanf("%d",&num2);
    printf("\nenter three number =");
    scanf("%d",&num3);

    if (num1 >= num2 && num1 >= num3) 
	{
        printf("\n%dlargest number", num1);
    } 
	else if (num2 >= num1 && num2 >= num3) 
	{
        printf("\n%dlargest number", num2);
    } 
	else 
	{
        printf("\n%d largest number", num3);
    }

    return 0;
}
