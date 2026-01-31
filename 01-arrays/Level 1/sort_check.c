/*
Question:
Given an array of integers, check whether the array is
sorted in ascending order or not.

Output:
- Print "Sorted" if the array elements are in ascending order
- Print "Not Sorted" otherwise
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

    int condition = 1;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            condition *= 1;
        }
        else
        {
            condition *= 0;
        }
    }
    if (condition == 1)
    {
        printf("sorted");
    }
    else
    {
        printf("not sorted");
    }
}