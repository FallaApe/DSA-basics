/*
Question:
Given an array of integers, count the number of
even elements and odd elements in the array.

Output:
- Print count of even numbers
- Print count of odd numbers
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
    
    int even_count=0,odd_count=0;
    
    for (int i=0;i<size;i++) {
        if (arr[i]%2==0) {
            even_count += 1;
        }
        else {
            odd_count += 1;
        }
    }
    
    printf("even numbers- %d\n",even_count);
    printf("odd numbers- %d",odd_count);
}
