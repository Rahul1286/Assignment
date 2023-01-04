#include <stdio.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(void)
{
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, add(num1, num2));
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, subtract(num1, num2));
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, multiply(num1, num2));
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", num1, num2, divide(num1, num2));
            break;
        default:
            printf("Error: Invalid operator");
    }

    return 0;
}

// Function definitions
double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}
