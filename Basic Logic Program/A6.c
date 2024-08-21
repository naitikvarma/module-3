//Q. Find area of Triangle Formula : A = 1/2 × b × h

#include <stdio.h>
int main()
{
	float base, hieght , area;
	printf("\nEnter the base of the tringle = ");
	scanf("%f",&base);
	
	printf("\nEnter the hieght of the tringle = ");
	scanf("%f",&hieght);
	
	area = base*hieght*0.5;
	
	printf("\nArea of the tringle = %f\n",area);
	
	return 0;
}
