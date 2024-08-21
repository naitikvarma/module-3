//5.WAP to print factorial of given number

#include<stdio.h>
int main ()
{
	int i,n,sum=1;
	
	printf("Enter any number to print factorial number = ");
	scanf("%d",&n);
		printf("factorial of %d = ",n);
	for (i=n;i>=1;i--)
	{
		sum*=i;
		printf("%d * ",i);
	}
		printf(" = %d",sum);
	return 0;
}
