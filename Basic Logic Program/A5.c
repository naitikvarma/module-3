// Q. Find Area of Cube formula : a = 6a2

#include<stdio.h>
int main()
{
	int side , area;
	
	printf("\nEnter the side of the cube = ");
	scanf("\%d",&side);
	
	area = 6* side * side; //Calculate area using the formula a = 6*a*a
	
	printf("\nSurface area of the cube : %2d\n" , area);
	
	return 0;
	
}
