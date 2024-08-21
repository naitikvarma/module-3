//Q. Find character value from ascii

#include<stdio.h>
int main()
{
	char c1; // Declares a variable 'c1' of type 'char' to store a character (like 'a', 'B', '!', or '5').
	printf("\nEnter the value of character = ");
	scanf("%c",&c1);
	
	printf("\nASCII value of = %c",c1);// Prints the character 'c1' itself 
	printf("\nASCII value of = %d",c1);// Prints the ASCII (integer) value of the character 'c1'

	return 0;
	
}
