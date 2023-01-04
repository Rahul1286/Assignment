#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

/*
This program defines a function called swap() that takes two pointers to integers, a and b, and swaps the values they point to using a temporary variable. 
It then prompts the user to enter two numbers, a and b, and passes their addresses to the swap() function. 
The values of a and b are printed before and after the swap to show that they have been successfully exchanged.
*/