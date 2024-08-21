/* Q.8.b Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage */

#include<stdio.h>

// Define the structure for employee information
struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
    int i;
};

int main() 
{
    // Declare an array of 5 Employee structures
    struct Employee emp[5];
    
    
    int i;
    // Input information for each employee
    for(i = 0; i < 5; i++)
	{
        printf("\nEnter information for employee %d = \n", i + 1);

        printf("Enter employee number = ");
        scanf("%d", &emp[i].empno);

        printf("Enter employee name = ");
        scanf(" %[^\n]", emp[i].empname); // Use %[^\n] to read a string with spaces

        printf("Enter employee address = ");
        scanf(" %[^\n]", emp[i].address); // Use %[^\n] to read a string with spaces

        printf("Enter employee age = ");
        scanf("%d", &emp[i].age);
    }

    // Display information for each employee
    printf("\nEmployee Information:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("\nEmployee %d =\n", i + 1);
        printf("Employee Number = %d\n", emp[i].empno);
        printf("Employee Name = %s\n", emp[i].empname);
        printf("Employee Address = %s\n", emp[i].address);
        printf("Employee Age = %d\n", emp[i].age);
    }

    return 0;
}
