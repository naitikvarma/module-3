/* Q.1  Write a program to find out the max number from given array using function */


#include<stdio.h>
int max();
int main()
{
	int maxnum;
	maxnum = max();
	printf("\nMaximun number = %d",maxnum);
	return 0;
}
int max()
{
	int arr[50],i,n,max=0;
	
	printf("Enter any number for size of array : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter %d number = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		if ( max < arr[i])
		{
			max = arr[i];
		}
    }
	return max;
}
