/* Q.7 WAP Find out length of string without using inbuilt function */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string = ");
    gets(str);

    int length = 0;
    while (str[length]!='\0') {
        length++;
    }

    printf("Length of the string = %d\n", length);
    return 0;
}

