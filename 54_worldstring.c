
#include <stdio.h>

void main() {
    char str[1000];
    int i = 0, words = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    while (str[i] != '\0') {
        // Count space characters to estimate words
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            words++;
        }
        i++;
    }

    printf("Total number of words: %d\n", words);


}
