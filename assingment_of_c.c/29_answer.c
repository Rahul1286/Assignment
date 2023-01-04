#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is positive\n", num);
    }
    else if (num < 0)
    {
        printf("%d is negative\n", num);
    }
    else
    {
        printf("%d is zero\n", num);
    }

    return 0;
}

/*This program prompts the user to enter a number, and then uses an if statement to check whether the number is positive, negative, or zero. If the number is greater than 0, it prints a message indicating that the number is positive. If the number is less than 0, it prints a message indicating that the number is negative. If the number is equal to 0, it prints a message indicating that the number is zero.*/