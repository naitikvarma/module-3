// Q.1)  Write a program in C to find the length of a string without using library functions.

#include<stdio.h>

int main()
{
	char str[100];
	int i;
	gets(str);
	for (i=0;str[i]!=0;i++);
	
	printf("\n Length of string = %d",i);
	
	return 0;
}
