/*
Write a C program to input elements in array and put even and odd elements in separate array.
How to separate even and odd array elements in two separate array containing only even or odd elements using C programming.
Example
Input
Input size of the array: 10
Input elements in array: 0 1 2 3 4 5 6 7 8 9
Output
Output even elements in array: 0 2 4 6 8
Output odd elements in array: 1 3 5 7 9
*/
#include <stdio.h>

#define MAX_SIZE 1000  // Maximum size of the array

void printArray(int arr[], int len);



int main()
{
    int arr[MAX_SIZE];
    int even[MAX_SIZE], odd[MAX_SIZE];
    
    int evenCount, oddCount;
    int i, size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    evenCount = 0;
    oddCount = 0;

    for(i=0; i<size; i++)
    {
        
        if(arr[i] & 1)
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
        else
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }

    printf("\nElements of even array: \n");
    printArray(even, evenCount);

    printf("\nElements of odd array: \n");
    printArray(odd, oddCount);

    return 0;
}


void printArray(int arr[], int len)
{
    int i;
    printf("Elements in the array: ");
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
