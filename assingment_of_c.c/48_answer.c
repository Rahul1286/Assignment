#include <stdio.h>

void check_even_odd(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is even.\n", n);
    }
    else
    {
        printf("%d is odd.\n", n);
    }
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    check_even_odd(n);

    return 0;
}
