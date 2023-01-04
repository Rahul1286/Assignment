#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int sum = add(a, b);
    printf("Sum = %d\n", sum);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
