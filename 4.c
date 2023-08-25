/*
Write a C program to read elements in two matrices and multiply them. Matrix multiplication program in C.
How to multiply matrices in C. Logic to multiply two matrices in C programming.
Example
Input
Input elements of matrix1:
1 2 3
4 5 6
7 8 9
Input elements of matrix2:
9 8 7
6 5 4
3 2 1
Output
Product of matrices =
30 24 18
84 69 54
138 114 90
*/
#include <stdio.h>

#define SIZE 3 // Size of the matrix

int main()
{
    int A[SIZE][SIZE];
    int B[SIZE][SIZE]; 
    int C[SIZE][SIZE];
    
    int row, col, i, sum;


    printf("Enter elements in matrix A of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

  printf("\nEnter elements in matrix B of size %dx%d: \n", SIZE, SIZE);
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
            sum = 0;
            
            for(i=0; i<SIZE; i++)
            {
                sum += A[row][i] * B[i][col];
            }

            C[row][col] = sum;
        }
    }

   printf("\nProduct of matrix A * B = \n");
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
