// Q.3) Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
int main()
{
	char name[1000];
	
	printf("\nEnter the characters = ");
	scanf("%s",&name);
	
	
	printf("\n\nReverse order = %s", strrev(name));
	
	return 0;
}
