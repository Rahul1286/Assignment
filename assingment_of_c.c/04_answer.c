#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int a[MAX_SIZE];
    int n, i;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    printf("Enter %d values: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Values in reverse order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
