/*
Write a C program to read elements in two matrices and find the difference of two matrices. Program to subtract two matrices in C. Logic to subtract two matrices in C programming.
Input
Input elements in 3x3 matrix1:
1 2 3
4 5 6
7 8 9

Input elements in 3x3 matrix2:
9 8 7
6 5 4
3 2 1
Output

Difference of both matrices =
-8 -6 -4
-2  0  2
4  6  8
*/
/**
 * C program to find difference of two matrices of size 3x3
 */

#include <stdio.h>

#define SIZE 3 // Size of the matrix

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
            
            C[row][col] = A[row][col] - B[row][col];
        }
    }

    printf("\nDifference of two matrices A-B = \n");
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
