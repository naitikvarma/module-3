//Q.2 Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>

int main()
{
	int Num1,Num2;
	printf("Enter the Num1/n");
	scanf("%d",&Num1);
	printf("Enter the Num2/n");
	scanf("%d",&Num2);
	
	printf("%d Addition", Num1+Num2);
	printf("%d Subtraction" , Num1-Num2);
	printf("%d Multiplication" , Num1*Num2);
	printf("%d Division", Num1/Num2);
	printf("%d Modulo", Num1%Num2);
	
	return 0;
	
}
