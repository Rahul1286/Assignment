#include <stdio.h>

void square(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square: %d\n", n * n);
}

int main(void)
{
    square();

    return 0;
}
