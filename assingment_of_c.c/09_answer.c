#include <stdio.h>

#define SIZE 10

int main(void)
{
    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;

    printf("Indices of multiples of 3:\n");
    for (i = 0; i < SIZE; i++)
    {
        if (a[i] % 3 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
