// Q.5)  Write a program in C to compare two strings without using string library functions.

#include<stdio.h>

int main()
{
	char s1[100] , s2[100];
	int i;
	
	printf("\nEnter the first string = ");
	scanf("%s",&s1);
	
	printf("\nEnter the Second string = ");
	scanf("%s",&s2);
	
	for (i=0;s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			printf("The string are not equal.\n");
			return 0;
		}
	}
	
	//if the loop completes without finding a difference , the string are equals.
	if (s1[i]== '\0' && s2[i]== '\0')
	{
		printf("The strings are equal.\n");
	}
	else
	{
		printf("The string are not equal.\n");
	}
	return 0;
}

