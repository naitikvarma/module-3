/* Q.24 1 + 2 + 3 + 4 + 5 + ... + n */


#include<stdio.h>
int main()
{
	int n,i,sum=0;
	
	printf("\nEnter number = ");
	scanf("%d",&n);
	printf("Number = ");
	for(i=1;i<=n;i++)
	{
		printf(" %d +",i);
		sum += i;
	}
	printf(" = %d",sum);
	return 0;
}
