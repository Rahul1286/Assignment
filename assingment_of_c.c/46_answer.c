#include <stdio.h>

void print_fibonacci_series(void)
{
    int a = 0, b = 1;
    int end;
    printf("Enter end term: ");
    scanf("%d", &end);

    printf("Fibonacci series: ");
    while (b <= end)
    {
        printf("%d ", b);
        int temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n");
}

int main(void)
{
    print_fibonacci_series();

    return 0;
}
