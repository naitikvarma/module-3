//7.WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include<stdio.h>
int main ()
{
	int n,digit=0,reverse=0;
	
	printf("Enter number to reverse it = ");
	scanf("%d",&n);
	while(n!=0)
	{
		digit = n % 10;
		reverse = reverse * 10 + digit;
		n/=10;
	}
	printf("Reverse number = %d",reverse);
	return 0;
}
