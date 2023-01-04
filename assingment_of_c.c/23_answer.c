#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    printf("Area = %.2f\n", area);

    return 0;
}
