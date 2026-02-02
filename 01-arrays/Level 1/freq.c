/*
Question:
Given an array of integers and a number X,
count how many times X occurs in the array.
*/

/*
Delete an Element from an Array

Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left
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
    
    int count=0,num;
    printf("enter number: ");
    scanf("%d",&num);
    
    for (int i=0;i<n;i++) {
        if (num == arr[i]) {
            count+=1;
        }
    }
    printf("freq of %d - %d",num,count);
}
