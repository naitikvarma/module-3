/* Q.9  WAP to show difference between Structure and Union. */

#include<stdio.h>

// Structure definition
struct Employee {
    int empno;
    char empname[50];
    float salary;
};

// Union definition
union Data 
{
    int i;
    float f;
    char str[20];
};

int main() 
{
    // Structure example
    struct Employee emp1;
    emp1.empno = 101;
    strcpy(emp1.empname, "John Doe");
    emp1.salary = 50000.00;

    // Union example
    union Data data;
    data.i = 10;
    data.f = 20.5;
    strcpy(data.str, "Hello");

    // Printing the values for structure
    printf("\nStructure Values:\n");
    printf("Employee Number: %d\n", emp1.empno);
    printf("Employee Name: %s\n", emp1.empname);
    printf("Employee Salary: %.2f\n", emp1.salary);

    // Printing the values for union
    printf("\nUnion Values:\n");
    printf("Integer Value: %d\n", data.i); // Only the last assigned value will be available
    printf("Float Value: %.2f\n", data.f); // Only the last assigned value will be available
    printf("String Value: %s\n", data.str); // Only the last assigned value will be available

    return 0;
}
