// Q .2 WAP to accept 5 numbers from user and display all numbers


#include <stdio.h>
 
int main() 
{
  int i, num, temp;
  int numbers[5]; // Declare an array to store the numbers
 
  // Input the numbers
  for (i = 1; i <= 5; i++) {
    printf("\nEnter number %d = ", i); 
    scanf("%d", &num);
    numbers[i - 1] = num; // Store the number in the array
    printf("%d ", num); 
  }
 
  // Display the numbers
  printf("\nYou entered these numbers:\n");
  for (i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");
 
  return 0;
}
