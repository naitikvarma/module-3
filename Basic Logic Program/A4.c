// Q.Find Area of Square formula : a = a2

#include<stdio.h>

int main()
{
	int side , area;
	
	printf("\nEnter the side of the square = ");
	scanf("\%d",&side);
	
	area = side * side; //Calculate area using the formula a = a*a
	
	printf("Area of the square : %2d\n" , area);
	
	return 0;
	
}
