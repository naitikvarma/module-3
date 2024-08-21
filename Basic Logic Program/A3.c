//Q.3  WAP to Find Area And Circumference of Circle

#include<stdio.h>
#define PI 3.14159

int main(){
	float radius , area , circumference;
	
	printf("\nEnter the radius of the circle = ");
	scanf("%f", &radius);
	
	area = PI*radius*radius;
	circumference = 2 * PI * radius;
	
	printf("\nArea of Circle:%2.f\n",area);
	printf("\nCircumference of Circle:%2.f\n",circumference);
	
	return 0;
}
