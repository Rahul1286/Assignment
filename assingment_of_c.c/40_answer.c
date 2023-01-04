#include <stdio.h>

int product(int a, int b, int c)
{
    return a * b * c;
}

int main(void)
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Product: %d\n", product(a, b, c));

    return 0;
}
