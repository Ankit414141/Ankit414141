#include <stdio.h>

void main() {
    char str[100], rev[100];
    int i = 0, len = 0;
    int j;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);  // Accepts one word like "apple"

    // Calculate length manually
    while(str[len] != '\0') {
        len++;
    }

    // Reverse without using -1
    j = 0;
    while(len > 0) {
        len = len - 1;           // Decrease length first
        rev[j] = str[len];       // Assign character
        j = j + 1;               // Move to next index
    }

    rev[j] = '\0'; // Null-terminate the reversed string

    // Output
    printf("Reversed string: %s\n", rev);
}
