/* Q.8 WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage */

// This code is generate for A.

#include<stdio.h>

struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() 
{
    struct Employee emp;

    printf("Enter employee number = ");
    scanf("%d", &emp.empno);

    printf("Enter employee name = ");
    scanf(" %[^\n]", emp.empname); // Use %[^\n] to read a string with spaces

    printf("Enter employee address = ");
    scanf(" %[^\n]", emp.address); // Use %[^\n] to read a string with spaces

    printf("Enter employee age = ");
    scanf("%d", &emp.age);

    // Display employee information
    printf("\nEmployee Information:\n");
    printf("Employee Number = %d\n", emp.empno);
    printf("Employee Name = %s\n", emp.empname);
    printf("Employee Address = %s\n", emp.address);
    printf("Employee Age = %d\n", emp.age);

    return 0;
}
