// Q.12 Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
int main ()
{
	int num,temp,sum=0,count=0,i;
	
	printf("\nEnter any number to check it is armstrong or not = ");
	scanf("%d",&num);	
    
    for(temp=num;temp!=0;temp/=10)
	{
		count++;
	}
    
	for(temp=num;temp!=0; temp/=10)
	{
	 int digit = temp%10;
	 int power = 1;
	 for(i=0;i<count;i++)
	 {
	 	power*=digit;
	 }
	 sum+=power;
    }
		if(sum==num)
		{
		printf("%d is arm strong number",num);	
		}
		else
		{
		printf("%d is not arm strong number",num);	
		}
	return 0;
}

