// Q.2) Write a program in C to separate individual characters from a string.

#include<stdio.h>
int main()
{
	char str[100];
	int i;
	
	printf("Enter a string = ");
	scanf("%s",str);
	
	
	for (i = 0; str[i] != '\0'; i++) 
	{
		printf("%c\n", str[i]);
	}
	return 0;
}
