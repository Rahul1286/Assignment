#include <stdio.h>

#define SIZE 10

void print_duplicates(int a[], int n);

int main(void)
{
    int a[SIZE] = {1, 2, 3, 3, 4, 4, 4, 5, 5, 5};

    printf("Duplicate elements:\n");
    print_duplicates(a, SIZE);

    return 0;
}

void print_duplicates(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}
