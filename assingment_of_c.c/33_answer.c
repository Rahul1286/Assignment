#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b && a + b > 0)
    {
        printf("HELLO\n");
    }
    else
    {
        printf("BYE\n");
    }

    return 0;
}
