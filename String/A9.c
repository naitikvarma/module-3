// Q.9 Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>

int main() 
{
    char Name[100];
    int maxLength = 0;
    int currentLength = 0;
    int i;

    printf("Enter any string =  ");
    scanf("%s", Name); 

    for (i = 0; Name[i] != '\0'; i++) 
	{
        if (Name[i] != ' ') 
		{
            currentLength++;
        } else 
		{
            if (currentLength > maxLength) 
			{
                maxLength = currentLength;
            }
            currentLength = 0; 
        }
    }

    
    if (currentLength > maxLength) 
	{
        maxLength = currentLength;
    }

    printf("Maximum length of a word: %d\n", maxLength);

    return 0;
}
