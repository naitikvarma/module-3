//Q.19.BPatterns:
//A
//B C
//D E F
//G H I J
//K L M N O
#include<stdio.h>
int main ()
{
	int i,j;
	char letter = 'A';

	printf("B pattern\n");
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=i;j++)
		{
		printf(" %c",letter);
		letter++;
		}
		printf("\n");
	}
	return 0;
}
