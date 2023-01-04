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
