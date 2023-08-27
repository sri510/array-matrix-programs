/*
Write a C program to input elements in array and search whether an element exists in array or not. How to search element in array linearly in C programming.
Logic to search element in array sequentially in C program.
Example
Input
Input size of array: 10
Input elements in array: 10, 12, 20, 25, 13, 10, 9, 40, 60, 5
Output
Element to search is: 25
Element found at index 3
*/
#include <stdio.h>

#define MAX_SIZE 100  // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size, i, toSearch, found;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);

    found = 0; 
    
    for(i=0; i<size; i++)
    {
        
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    
    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }

    return 0;
}
