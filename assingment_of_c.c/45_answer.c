#include <stdio.h>

void print_natural_numbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    print_natural_numbers(n);

    return 0;
}
