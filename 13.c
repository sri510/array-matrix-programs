/*
Write a C program to input elements in array and find reverse of array. How to find reverse of array in C programming. Logic to find reverse of array in C program.
Example
Input
Input array elements: 10, 5, 16, 35, 500
Output
Array elements after reverse: 500, 35, 16, 5, 10
*/
#include <stdio.h>
#define MAX_SIZE 100      

int main()
{
    int arr[MAX_SIZE];
    int size, i;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    printf("\nArray in reverse order: ");
    for(i = size-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
