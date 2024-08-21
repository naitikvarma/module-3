// Q.4) Write a program in C to count the total number of words in a string.

#include <stdio.h>
#include <string.h>
 
int main() 
{
  char line[100];
  int i, count = 0;
 
  printf("\nEnter the Sentence. = ");
  scanf("%[^\n]", line); // Read the entire line
 
  for (i = 0; i < strlen(line); i++) 
  { // Remove semicolon
    if (line[i] == ' ') 
	{
      count = count + 1;
    }
  }
 
  printf("\nThe total words in the sentence is = %d", count + 1);
 
  return 0;
}
