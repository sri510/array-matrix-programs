/*
Write a C program to read elements in a matrix and find sum of upper triangular matrix. How to find sum of upper triangular matrix in C.
Logic to find sum of upper triangular matrix.
Example
Input
Input matrix elements: 
1 2 3
0 5 6
0 0 9
Output
Sum of upper triangular matrix = 11
*/
#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 3

int main()
{
    int A[MAX_ROWS][MAX_ROWS];
    int row, col, sum = 0;
    
    printf("Enter elements in matrix of size %dx%d: \n", MAX_ROWS, MAX_COLS);
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            if(col>row)
            {
                sum += A[row][col];
            }
        }
    }

    printf("Sum of upper triangular matrix = %d", sum);

    return 0;
}
