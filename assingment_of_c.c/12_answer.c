#include <stdio.h>

#define ROWS 4
#define COLS 3

int main(void)
{
    // Initialize matrix at compile time
    int matrix[ROWS][COLS] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    // Print matrix
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

#define ROWS 3
#define COLS 3

int main(void)
{
    int matrix[ROWS][COLS];
    int i, j;

    printf("Enter %d values:\n", ROWS * COLS);
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print matrix
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
