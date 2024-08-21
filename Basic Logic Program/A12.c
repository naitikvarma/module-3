// Q..Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include<stdio.h>

int main()
{
	int numStudents , totalApple;
	printf("\nEnter the number of students = ");
	scanf("%d",& numStudents);
	
	totalApple = numStudents*5;
	
	printf("\nTotal apples required = %2d\n",totalApple);
	
	return 0;
	
}
