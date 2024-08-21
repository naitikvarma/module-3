//9.Write a program make a summation of given number (E.g., 1523 Ans: -11)


#include<stdio.h>
int main ()
{
	int n,dig,sum;

	printf("\nEnter any number to summation = ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		dig = n%10;
		sum+=dig;
		n/=10;
	}
	printf("Maximum digit in this number = %d",sum);

	return 0;
}
