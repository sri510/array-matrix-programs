/*
Write a C program to read elements in a matrix and find determinant of the given matrix. C program to find determinant of a 2×2 matrix and 3×3 matrix. Logic to find determinant of a matrix in C programming.
Example
Input
Input elements in 2x2 matrix: 
1 2
3 4
Output
Determinant of the matrix = -2
*/
#include <stdio.h>
#define SIZE 2 // Matrix size

int main()
{
    int A[SIZE][SIZE];
    int row, col;
    long det;

    printf("Enter elements in matrix of size 2x2: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

    printf("Determinant of matrix A = %ld", det);

    return 0;
}
