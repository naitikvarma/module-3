// Q.22 Accept 3 numbers from user using while loop and check each numbers palindrome 



#include<stdio.h>
int main ()
{
	int i=1,Num,temp,digit=0,rev=0;
	
	printf("Enter any 3 number\n");
	while(i<=3)
	{
	printf("\nEnter %d number = ",i);
	scanf("%d",&Num);
	temp = Num;
	rev=0;
	while(Num!=0)
	{
		digit = Num % 10;
		rev = rev * 10 + digit;
		Num/=10;
	}
	if(temp==rev)
	{
		printf("\n%d is palidrome\n",temp);
	}
	else
	{
		printf("\n%d is not palidrome\n",temp);
	}
	i++;
    }
	return 0;
}
