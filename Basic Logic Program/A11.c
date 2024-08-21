// Q .Find circumference of square formula : C = 4 * a

#include <stdio.h>

int main()
{
	int area,circumference;
	printf("\nEnter the value of square = ");
	scanf("%d",&area);
	
	circumference = 4*area;
	
	printf("\nCircumference of the square = %2d",circumference);
	
	return 0;
}
