/*
Question:
Given an array of integers, find the second largest element in the array
without sorting the array.

Note:
- The array contains at least two elements.
- The solution should use array traversal, not sorting.
*/
#include <stdio.h>
void main()
{
    int size;
    printf("enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], second_max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > second_max && arr[i] < max)
        {
            second_max = arr[i];
        }
    }

    printf("second max number is %d", second_max);
}