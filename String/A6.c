//Q.6  Write a program in C to count the total number of alphabets, digits and special characters in a string

#include <stdio.h>

int main() 
{
  char s1[100];
  int alphabets = 0; 
  int digits = 0;   
  int specialCount = 0; 
  int i = 0;

  printf("\nEnter a string = ");
  scanf("%[^\n]", s1); // Correct scanf

  for (i = 0; s1[i] != '\0'; i++) 
  {
    if ((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z')) 
	{
      alphabets++;
    } 
	else if (s1[i] >= '0' && s1[i] <= '9') 
	{
      digits++;
    } 
	else 
	{
      specialCount++;
    }
  }

  printf("Alphabets: %d\n", alphabets);
  printf("Digits: %d\n", digits);
  printf("Special Characters: %d\n", specialCount);

  return 0;
}
