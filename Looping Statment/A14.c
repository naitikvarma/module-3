// Q.14 Accept 5 numbers from user and find those numbers factorials.


#include<stdio.h>
int main ()
{
	int j,n,sum=1;
	
	printf("Enter any 5 number to find those factorial");
	for(j=1;j<=5;j++)
	{
	printf("\nEnter the %d number = ",j);
	scanf("%d",&n);
	
	int i=n;
	while(i>=1)
	{
	printf("%d * ",i);
	sum*=i;
	i--;
	}
	printf(" = %d",sum);
	sum=1;
    }
	return 0;
}
