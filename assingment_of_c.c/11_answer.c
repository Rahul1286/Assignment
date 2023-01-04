#include <stdio.h>

#define SIZE 10

int main(void)
{
    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, max = a[0];

    for (i = 1; i < SIZE; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Max = %d\n", max);

    return 0;
}
