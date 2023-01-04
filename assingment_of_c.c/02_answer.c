#include <stdio.h>

#define SIZE 5

int main(void)
{
    int a[SIZE];
    int i;

    // Initialize array at run time
    printf("Enter %d values: ", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &a[i]);
    }

    // Print elements of array
    for (i = 0; i < SIZE; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
