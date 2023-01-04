#include <stdio.h>

#define SIZE 10

int search(int a[], int n, int value);

int main(void)
{
    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value;
    int index;

    printf("Enter a value to search for: ");
    scanf("%d", &value);

    index = search(a, SIZE, value);
    if (index == -1)
    {
        printf("Value not found\n");
    }
    else
    {
        printf("Value found at index %d\n", index);
    }

    return 0;
}

int search(int a[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            return i;
        }
    }

    return -1;
}
