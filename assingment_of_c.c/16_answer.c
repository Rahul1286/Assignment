#include <stdio.h>

#define SIZE 10

void bubble_sort(int a[], int n);

int main(void)
{
    int a[SIZE] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int i;

    printf("Original array:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    bubble_sort(a, SIZE);

    printf("Sorted array:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void bubble_sort(int a[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
