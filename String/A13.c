// Q.13 Write a program in C to remove characters from a string except alphabets

#include<stdio.h>

int main()
{
	char line[150];
	char newstr[150];
	
	printf("\n Enter a string = ");
	get (str);
	
	int i, j = 0;
  for (i = 0; str[i] != '\0'; i++) 
  {
    if (isalpha(str[i])) 
	{
      newStr[j] = str[i];
      j++;
    }
  }
  newStr[j] = '\0';
  
  printf("String with only alphabets: %s\n", newStr);

  return 0;
}
