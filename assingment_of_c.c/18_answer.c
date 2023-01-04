#include <stdio.h>

#define SIZE 10

void insertion_sort(int a[], int n);

int main(void)
{
    int a[SIZE] = {5, 3, 1, 6, 4, 2, 9, 8, 7, 10};

    insertion_sort(a, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void insertion_sort(int a[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
