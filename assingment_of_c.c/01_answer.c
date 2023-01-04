#include <stdio.h>

#define SIZE 5

int main(void)
{
    // Initialize array at compile time
    int a[SIZE] = {1, 2, 3, 4, 5};
    int i;

    // Print elements of array
    for (i = 0; i < SIZE; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
