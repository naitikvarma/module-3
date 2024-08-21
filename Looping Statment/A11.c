//11.Accept 5 names from user at run time.

#include<stdio.h>
int main ()
{
	int i,n,j;
	char ch[50];

	printf("\nAccept 5 names from user at run time.");
   
	for(i=1;i<=5;i++)
	{
		printf("\nEnter the %d name = ",i);
		scanf("%s",&ch);
	}

	return 0;
}
