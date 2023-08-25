/*
Write a C program to add two matrices.
Input elements in 3x3 matrix1: 
1 2 3
4 5 6
7 8 9
Input elements in 3x3 matrix2:
9 8 7
6 5 4
3 2 1
Output

Sum of both matrix =
10 10 10
10 10 10
10 10 10
*/
/**
 * C program to find sum of two matrices of size 3x3
 */

#include <stdio.h>
#define SIZE 3 
int main()
{
    int A[SIZE][SIZE]; 
    int B[SIZE][SIZE]; 
    int C[SIZE][SIZE]; 

    int row, col;

    printf("Enter elements in matrix A of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    
    printf("\nEnter elements in matrix B of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
    }

    printf("\nSum of matrices A+B = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}
