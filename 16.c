/*
Write a C program to input elements in array and sort array elements in ascending or descending order. How to sort array in ascending order in C programming.
Logic to sort array in ascending or descending order.
Example
Input
Input size of array: 10
Input array elements: 20, 2, 10, 6, 52, 31, 0, 45, 79, 40
Output
Array sorted in ascending order: 0, 2, 6, 10, 20, 31, 40, 45, 52, 79
*/
#include <stdio.h>
#define MAX_SIZE 100    // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size;
    int i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        
        for(j=i+1; j<size; j++)
        {
           
            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
