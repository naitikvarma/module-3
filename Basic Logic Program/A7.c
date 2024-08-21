// Q. Find area of Rectangle Formula : A=wl

#include <stdio.h>

int main()
{
	int area , width , length;
	printf("\nEnter the width of rectangle = ");
	scanf("%d" ,&width);
	
	printf("\nEnter the length of rectangle = ");
	scanf("%d" ,&length);
	
	area = width*length;
	
	printf("\nArea of the rectangle = %2d\n",area);
	
	return 0;
	
	
}
