//Q.14 Write a program in C to combine two strings manually

#include<stdio.h>

int main() {
    char s1[100], s2[100], combined[200]; // Allocate enough space for combined string
    int i, j = 0;

    printf("\nEnter the first string = ");
    scanf("%s", s1);

    printf("\nEnter the second string = ");
    scanf("%s", s2);

    // Copy the first string to the combined string
    for (i = 0; s1[i] != '\0'; i++) 
	{
        combined[i] = s1[i];
    }

    // Copy the second string to the combined string after the first string
    for (j = 0; s2[j] != '\0'; j++) 
	{
        combined[i + j] = s2[j]; 
    }

    // Add the null terminator at the end of the combined string
    combined[i + j] = '\0';

    printf("\nCombined string: %s", combined);

    return 0;
}
