/*
Question:
Given an array of integers, reverse the array in-place
without using any extra array.
*/

#include <stdio.h>
void main() {
    int size;
    printf("enter size of array: ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("enter elements: ");
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int count = size-1;
    for (int i=0;i<=size/2;i++) {
        int temp = arr[i];
        arr[i] = arr[count];
        arr[count] = temp;
        count-=1;
    }
    
    for (int i=0;i<size;i++) {
        printf("%d\t",arr[i]);
    }
}
