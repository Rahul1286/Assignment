#include <stdio.h>

#define MAX_SIZE 100

void delete_element(int a[], int *n, int index);

int main(void)
{
    int a[MAX_SIZE] = {1, 2, 3, 4, 5};
    int n = 5;
    int index;

    printf("Original array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter an index: ");
    scanf("%d", &index);

    delete_element(a, &n, index);

    printf("Modified array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void delete_element(int a[], int *n, int index)
{
    // Shift elements to the left
    for (int i = index; i < *n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    // Update size of array
    (*n)--;
}
