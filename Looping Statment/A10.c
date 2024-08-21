// Q.10 Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)


#include<stdio.h>
int main ()
{
	int i,n,fdig,ldig;
	
	printf("Enter any number to make a summation of first and last Digit = ");
	scanf("%d",&n);	
	
		ldig = n%10;
		fdig = n;
		while(fdig>=10)
		{
	     	fdig/=10;
		}
		
	printf("Summation of first digit and last digit in this number = %d",fdig+ldig);

	
	
	return 0;
}

