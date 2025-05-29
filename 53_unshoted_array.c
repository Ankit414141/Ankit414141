#include <stdio.h>

void main() {
    int arr[100], n, i, value, found = 0;

    // Input 
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input value to search
    printf("Enter value to search: ");
    scanf("%d", &value);

    // Search for the value
    for(i = 0; i < n; i++) {
        if(arr[i] == value) {
            printf("Value found at position %d (index %d)\n", i + 1, i);
            found = 1;
            break;
        }
    }

    // If not found
    if(!found) {
        printf("Value not found\n");
    }

    
}
