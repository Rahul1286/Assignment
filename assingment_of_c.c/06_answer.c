#include <stdio.h>

#define MAX_SIZE 100

void duplicate_elements(int a[], int *n);

int main(void)
{
    int a[MAX_SIZE] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Original array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    duplicate_elements(a, &n);

    printf("Modified array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void duplicate_elements(int a[], int *n)
{
    int size = *n;

    // Shift elements to the right
    for (int i = size - 1; i >= 0; i--)
    {
        a[i + size] = a[i];
    }

    // Update size of array
    *n *= 2;
}
