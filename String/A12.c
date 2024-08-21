// Q.12 Write a program in C to find the number of times a given word 'is' appears in the given string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[100] = "is"; // The word to search for
    int count = 0;
    int i, j;

    printf("Enter a string = ");
    scanf("%[^\n]", str); // Read the entire line

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == word[0]) 
		{ // Check if the current character matches the first character of 'is'
            // If the first character matches, check for the rest of the word
            for (j = 1; word[j] != '\0'; j++) 
			{
                if (str[i + j] != word[j]) 
				{
                    break; // Word doesn't match
                }
            }

            if (word[j] == '\0') 
			{ // Word matched completely
                count++;
                i += j - 1; // Skip the matched characters
            }
        }
    }

    printf("The word 'is' appears %d times in the string.\n", count);

    return 0;
}
