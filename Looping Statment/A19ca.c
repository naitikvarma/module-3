//Q.19.CPatterns:
//1
//2 3
//4 5 6
//7 8 9 1 0
//11 12 13 14 15

#include<stdio.h>
int main ()
{
	int i,j;
	int num = 1;
	
	printf("C pattern\n");
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=i;j++)
		{
		printf(" %d",num);
	    num++;
		}
		printf("\n");
	}
	return 0;
}
