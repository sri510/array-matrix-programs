/*
Write a C program to read elements in a matrix and check whether the given matrix is symmetric matrix or not.
How to check symmetric matrix in C. Logic to check symmetric matrix in C programming.
Example
Input
Input matrix elements: 
1 2 3
2 4 5
3 5 8
Output
Given matrix is symmetric matrix.
*/
#include <stdio.h>
#define SIZE 3

int main()
{
    int A[SIZE][SIZE];  
    int B[SIZE][SIZE];  

    int row, col, isSymmetric;

    printf("Enter elements in matrix of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            B[row][col] = A[col][row];
        }
    }


    
    isSymmetric = 1;
    for(row=0; row<SIZE && isSymmetric; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            if(A[row][col] != B[row][col])
            {
                isSymmetric = 0;
                break;
            }
        }
    }

    
    if(isSymmetric == 1)
    {
        printf("\nThe given matrix is Symmetric matrix: \n");

        for(row=0; row<SIZE; row++)
        {
            for(col=0; col<SIZE; col++)
            {
                printf("%d ", A[row][col]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }

    return 0;
}
