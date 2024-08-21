/* Q.26 (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) */

#include<stdio.h>
int main()
{
	int i,n,j;
	
	printf("\nEnter number = ");
	scanf("%d",&n);
	int sum=1;
	for(i=0; i<n; i++)
	{
			sum+=i;
			printf(" %d",sum);
			sum++; 
	}
	return 0;
}
