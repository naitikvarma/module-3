// Q.4  WAP to print table up to given numbers */

#include<stdio.h>
int main ()
{
	int i,j,n;
	
	printf("Enter the number to print table = ");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",j,i,j*i);
	}
	printf("\n");
}
	return 0;
}
