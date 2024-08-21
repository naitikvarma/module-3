/* Q.4 WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array */

#include<stdio.h>

int main() 
{
    int n,i,j,k;
    printf("Enter the size of the square matrices = ");
    scanf("%d", &n);
     
    int mat1[n][n], mat2[n][n], result[n][n]; // matrix declaration.
    

    // Input elements for first matrix
    printf("Enter elements for first matrix =\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
        	printf("Enter the number in [%d][%d]",i,j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for second matrix
    printf("Enter elements for second matrix =\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
        	printf("Enter the number in [%d][%d]",i,j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Addition
    printf("Addition of matrices =\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Subtraction
    printf("Subtraction of matrices =\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    printf("Multiplication of matrices =\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            result[i][j] = 0;
            for ( k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
