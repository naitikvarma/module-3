// Q. Find circumference of Triangle formula : triangle = a + b + c

#include <stdio.h>

int main()
{
	int sideA , sideB , sideC , triangle;
	
	printf("\nEnter the length of side A = ");
	scanf("%d",&sideA);
	
	printf("\nEnter the length of side B = ");
	scanf("%d",&sideB);
	
	printf("\nEnter the length of side C = ");
	scanf("%d",&sideC);
	
	triangle = sideA + sideB + sideC;
	
	printf("\nCircumference of Triangle = %2d\n",triangle);
	
	return 0;
}
