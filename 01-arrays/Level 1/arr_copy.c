/*
Question:
Given an array of integers, copy all elements
from one array into another array and print
the copied array.
*/

#include <stdio.h>
void main() {
    int n;
    printf("enter size: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter elements: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    
    int arr2[n];
    
    for (int i=0;i<n;i++) {
        arr2[i] = arr[i];
    }
    
    for (int i=0;i<n;i++) {
        printf("%d",arr2[i]);
    }
}
