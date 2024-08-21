//Q. Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary.
#include <stdio.h>

int main() 
{
    float monthlySalary, insurancePremium, loanInstallment, remainingSalary;

    printf("\nEnter your monthly salary = ");
    scanf("%f", &monthlySalary);

    // Calculate deductions
    insurancePremium = 0.10 * monthlySalary;  //Calculates the insurance premium as 10% of the monthly salary
    loanInstallment = 0.10 * monthlySalary;   //Calculates the loan installment as 10% of the monthly salary.

    // Calculate remaining salary
    remainingSalary = monthlySalary - insurancePremium - loanInstallment; //Subtrac
	                                    

    printf("\nYour insurance premium is: %2f\n", insurancePremium);
    printf("\nYour loan installment is: %2f\n", loanInstallment);
    printf("\nYour remaining salary is: %2f\n", remainingSalary);

    return 0;
}
