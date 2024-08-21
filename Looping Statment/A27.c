/* Q.27 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n */

#include<stdio.h>
int main()
{
	int i,n;
	float a,b=2,ans=0;
	
	printf("\nEnter number = ");
	scanf("%d",&n);
	printf("\n Number = ");
	
	for(a=1; a<=n; a++)
	{
		printf(" %.2f + ",a/b); 
		ans += a/b;
		b++;
	}
	
    printf(" = %.2f",ans);
	return 0;
}


