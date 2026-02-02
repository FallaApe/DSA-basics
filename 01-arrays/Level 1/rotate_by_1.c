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
    
    int arr[n+1];
    printf("enter elements: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    
    int temp=arr[0];

    for (int i=0;i<n-1;i++) {  
        arr[i] = arr[i+1];
    }
    arr[n-1]=temp;
    
    for (int i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
}
