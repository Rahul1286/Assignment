#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int sum = a + b + c + d + e;
    float average = (float) sum / 5;
    printf("Average = %.2f\n", average);

    return 0;
}
