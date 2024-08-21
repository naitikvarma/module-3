// Q.Write a program in C to copy one string to another string.

#include<stdio.h>

int main() 
{
    char real[100], copy[100];
    int i;

    printf("Enter the source string = ");
    scanf("%s", real);

    // Copy the source string to the destination string character by character
    for (i = 0; real[i] != '\0'; i++) 
	{
        copy[i] = real[i];
    }

    // Add the null terminator to the end of the destination string
    copy[i] = '\0';

    printf("Copied string: %s\n", copy);

    return 0;
}
