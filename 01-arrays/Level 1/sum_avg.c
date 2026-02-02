//Taking input from user, Find the sum and average of array elements.

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