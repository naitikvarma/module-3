/* Q.10 WAP to perform Palindrome number using for loop and function */

#include <stdio.h>

int isPalindrome(int num);
int main() 
{
    int num;
    printf("Enter a number = ");
    scanf("%d", &num);

    
    if (isPalindrome(num)) 
	{
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    return 0;
    
}

int isPalindrome(int num) 
{
    int rev = 0;
    int original = num;

    for (num=num; num != 0; num /= 10) 
	{
        int remainder = num % 10;
        rev = rev * 10 + remainder;
    }
    printf("Reverse of number = %d\n",rev);
    if (rev== original) 
	{
        return 1;
    } 
	else
    {
        return 0; 
    }
}
