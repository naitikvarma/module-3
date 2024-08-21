/* Q.15 Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible. */

#include<stdio.h>
int main ()
{
	int Maths,Physics,Chemistry;
	
	printf("Enter the mark of Maths = ");
	scanf("%d",&Maths);
    if(Maths>=65)
    {
    	printf("Enter the mark of Physics = ");
	    scanf("%d",&Physics);
	    if(Physics>=55)
	    {
	        printf("Enter the mark of Chemistry = ");
            scanf("%d",&Chemistry);
			if(Chemistry>=50)
			{
				if(Maths+Physics+Chemistry>=190)
				{
					printf("\nYour are eligible\n");
					printf("\nTotal marks = %d\n",Maths+Physics+Chemistry);
				    printf("\nTotal marks of Maths and Physics = %d\n",Maths+Physics);
				}
				else if(Maths+Physics>=140)
				{
					printf("\nYour are eligible\n");
					printf("\nTotal marks = %d\n",Maths+Physics+Chemistry);
				    printf("\nTotal marks of math and Physics = %d\n",Maths+Physics);
				}
				else
				{
					printf("\nYour are not eligible total marks should be >= 190 or marks of\nMaths and Physics >= 140\n");
				    printf("\nTotal marks = %d\n",Maths+Physics+Chemistry);
				    printf("\nTotal marks of Maths and Physics = %d\n",Maths+Physics);
				}
			}
			else
	        {
	     	    printf("You are not eligible Chemistry marks > 50");
	        }
		}
		else
	    {
	     	printf("You are not eligible Physics marks > 55");
	    }
     	
	}
	else
	{
		printf("You are not eligible Maths marks > 65");
	}
    return 0;
}
