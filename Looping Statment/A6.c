//Q.6.WAP to print Fibonacci series up to given number

#include<stdio.h>
int main ()
{
	int n,i,first=0,second=1,nextnum=0;
	printf("Enter num to print Fibonacci series = ");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		if(i==1)
		{
			printf("%d ",first);
		}
		if(i==2)
		{
			printf("%d ",second);
		}
		nextnum = first + second;
		first=second;
		second=nextnum;
		printf("%d ",nextnum);
	}
	return 0;
}
