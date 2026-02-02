/*
Question:
Given an array of integers, calculate the sum and average of all elements
in the array.

Note:
- The number of elements is provided by the user.
- The array elements are entered by the user.
- The solution should use array traversal.
- Average should be displayed up to two decimal places.
*/


#include <stdio.h>
int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    float average;

    
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];   
    }

   
    average = (float)sum / n;

    
    printf("\nSum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", average);

    return 0;

}
