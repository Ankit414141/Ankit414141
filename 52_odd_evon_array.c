//2) write a program to count odd and even values in array 
#include <stdio.h>
void main() {
    int n, i;
    int evenCount = 0, oddCount = 0;

    // User se array size input lena
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Array 

    // User se array elements input lena
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Odd aur even logic use
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; // Even number
        } else {
            oddCount++; // Odd number
        }
    }

    // print 
    printf("Total even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);

    
}
