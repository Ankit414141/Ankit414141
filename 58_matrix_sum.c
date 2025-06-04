#include <stdio.h>

// Constants
#define ROW 7
#define COLUMN 3   // Last column will store the total

void main()
{
    int matrix[ROW][COLUMN];
    int r, c, sum;

    // Input values (only 2 columns; 3rd column is for total)
    for (r = 0; r < ROW; r++)
    {
        sum = 0; // Reset sum for each row
        for (c = 0; c < COLUMN - 1; c++)
        {
            printf("Enter data for row %d, column %d: ", r + 1, c + 1);
            scanf("%d", &matrix[r][c]);
            sum += matrix[r][c];
        }
        matrix[r][COLUMN - 1] = sum; // Store row total in the last column
    }

    // Display the matrix with row totals
    printf("\nMatrix with row totals:\n");
    for (r = 0; r < ROW; r++)
    {
        for (c = 0; c < COLUMN; c++)
        {
            printf("%5d", matrix[r][c]);
        }
        printf("\n");
    }
}
