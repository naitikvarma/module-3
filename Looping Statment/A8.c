//8.Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
int main ()
{
	int n,digit,max=0;

	printf("Enter any to find maximum digit = ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		digit = n%10;
		if(digit>max)
		{
			max=digit;
		}
		n/=10;
	}
	printf("Maximum digit in this number = %d",max);
	return 0;
}
