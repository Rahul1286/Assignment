#include <stdio.h>

#define MAX_SIZE 100

void insert_element(int a[], int *n, int index, int value);

int main(void)
{
    int a[MAX_SIZE] = {1, 2, 3, 4, 5};
    int n = 5;
    int index, value;

    printf("Original array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter an index and a value: ");
    scanf("%d %d", &index, &value);

    insert_element(a, &n, index, value);

    printf("Modified array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void insert_element(int a[], int *n, int index, int value)
{
    // Shift elements to the right
    for (int i = *n; i > index; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert new element
    a[index] = value;

    // Update size of array
    (*n)++;
}
