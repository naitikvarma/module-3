// Q8. Write a program in C to count the total number of vowels or consonants in a string.

#include<stdio.h>

int main()
{
	char Name[100];
	int i , vowelsCount=0 ,Consonants=0;
	
	printf("\n Enter any string = ");
	scanf("%s",Name);
	
	for (i=0; i=<strlen(Name);i++)
	{
		if (Name[i]=='a' ||Name[i]=='e' ||Name[i]=='i' ||Name[i]=='o' ||Name[i]=='u' ||
		    Name[i]=='A' ||Name[i]=='E' ||Name[i]=='I' ||Name[i]=='O' ||Name[i]=='U')
		        vowelsCount=vowelsCount+1;
		else
		    Consonants=Consonants+1;
	}
	
	return 0;
}
