#include <stdio.h>
void main() {
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("enter elements: ");
    for (int i=0;i<=size-1;i++) {
        scanf("%d",&arr[i]);
    }
    
    int min=arr[0],max=arr[0];
    
    for (int i=0;i<=size-1;i++) {
        if (min >= arr[i]) {
            min = arr[i];
        }
        if (max <= arr[i]) {
            max = arr[i];
        }
        
    }
    printf("\nthis is the array: ");
    for (int i=0;i<=size-1;i++) {
        printf("%d\t",arr[i]);
    }
    printf("\nmax: %d, min: %d",max,min);
    
}
