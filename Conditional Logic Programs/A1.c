// Q.1) Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>

int main()
{
	int Num1 , Num2;
	
	printf("\nEnter the first integer number = ");
	scanf("%d",& Num1);
	
	printf("\nEnter the second integer number = ");
	scanf("%d",& Num2);
	
	if (Num1 == Num2) 
	{
		printf("The two integers %d and %d are equal.\n",Num1,Num2);
	}
	else
	{
		printf("The two integers %d and %d are not equal.\n",Num1,Num2);
	}
	return 0;
}

