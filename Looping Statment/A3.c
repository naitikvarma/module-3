/* Q.3  WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers */


#include<stdio.h>
int main ()
{
	int i,n,evenCount=0,oddCount=0,evenSum=0,oddSum=0;

	printf("Enter any 10 numbers");
	for(i=1;i<=10;i++)
	{
		
		printf("\nEnter number %d = ",i);
     	scanf("%d",&n);
         if(n%2==0)
         {
         	evenCount++;
         	evenSum = evenSum + n;
		 }
		 
		 else
		 {
		 	oddCount++;
         	oddSum = oddSum + n;
		 }
	}
         	printf("\n%d Even numbers are there",evenCount);
         	printf("\n%d odd numbers are there",oddCount);
         	printf("\nsum of even number = %d",evenSum);
         	printf("\nsum of odd number = %d",oddSum);
	return 0;
}

