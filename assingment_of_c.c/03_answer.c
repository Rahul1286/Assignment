#include <stdio.h>

#define SIZE 5

int main(void)
{
    // Initialize array at compile time
    int a[SIZE] = {1, 2, 3, 4, 5};
    int i, sum = 0;

    // Calculate sum of elements
    for (i = 0; i < SIZE; i++)
    {
        sum += a[i];
    }

    // Print sum
    printf("Sum = %d\n", sum);

    return 0;
}
