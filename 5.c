/*
Write a C program to enter elements in two matrices and check whether both matrices are equal or not. C program to check whether elements of two matrices are equal or not. Logic to check if two matrices are equal or not in C programming.
Example
Input
Input elements of matrix1:
1 2 3
4 5 6
7 8 9
Input elements of matrix2:
1 2 3
4 5 6
7 8 9
Output
Both matrices are equal
*/

#include <stdio.h>

#define SIZE 3 // Matrix size

int main()
{
    int A[SIZE][SIZE]; 
    int B[SIZE][SIZE];

    int row, col, isEqual;

    printf("Enter elements in matrix A of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    printf("\nEnter elements in matrix B of size %dx%d: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

   isEqual = 1;

    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            
            if(A[row][col] != B[row][col])
            {
                isEqual = 0;
                break;
            }
        }
    }

    if(isEqual == 1)
    {
        printf("\nMatrix A is equal to Matrix B");
    }
    else
    {
        printf("\nMatrix A is not equal to Matrix B");
    }

    return 0;
}
