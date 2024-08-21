// Q. Find circumference of Rectangle formula : C = 4 * a

#include <stdio.h>

int main()
{
	int length , width , circumference;
	
	printf("\n Enter the length of the rectangle = ");
	scanf("%d",&length);
	
	printf("\n Enter the width of the rectangle = ");
	scanf("%d",&width);
	
	circumference = 4*(length + width); // According to formula of Area = length + width
	
	printf("\nCircumference of the rectangle = %2d\n",circumference);
	
	return 0;
	
}
