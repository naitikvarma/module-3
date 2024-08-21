
//Q.19.A Patterns:
//1
//10
//101
//1010
//10101


#include<stdio.h>
int main()
{
	int i,j;
	
	printf("A pattern\n");
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("0");
			}
			else
			{
			printf("1");
			}
		}
		printf("\n");
	}
	return 0;
}

