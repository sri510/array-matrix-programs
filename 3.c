/*
Write a C program to read elements in a matrix and perform scalar multiplication of matrix. C program for scalar multiplication of matrix.
How to perform scalar matrix multiplication in C programming. Logic to perform scalar matrix multiplication in C program.
Input
Input elements of matrix A:
1 2 3
4 5 6
7 8 9
Input multiplier: 2
Output
2  4  6
8 10 12
14 16 18
*/
/**
 * C program to perform scalar matrix multiplication
 */
 
#include <stdio.h>

#define SIZE 3 // Maximum size of the array

int main()
{
    int A[SIZE][SIZE]; 
    int num, row, col;

   printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    printf("Enter any number to multiply with matrix A: ");
    scanf("%d", &num);

   for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            A[row][col] = num * A[row][col];
        }
    }

   printf("\nResultant matrix c.A = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }

    return 0;
}
