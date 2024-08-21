//  Q.23 C Program to Reverse a Number Using FOR Loop


#include<stdio.h>
int main ()
{
	int Num,digit=0,reversedNum=0;

	printf("Enter number to reverse it = ");
	scanf("%d",&Num);
	for(Num=Num;Num!=0;Num/=10)
	{

		digit = Num % 10;
		reversedNum = reversedNum * 10 + digit;
	}
	printf("Reverse number = %d",reversedNum);
	return 0;
}
