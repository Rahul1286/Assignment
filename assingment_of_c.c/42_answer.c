#include <stdio.h>

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main(void)
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Sum: %d\n", sum(a, b, c));

    return 0;
}
