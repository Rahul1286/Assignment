#include <stdio.h>

int main(void)
{
    int a = 5, b = -5, c = 0;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    // Increment
    printf("a = %d\n", ++a);
    printf("b = %d\n", ++b);
    printf("c = %d\n", ++c);

    // Decrement
    printf("a = %d\n", --a);
    printf("b = %d\n", --b);
    printf("c = %d\n", --c);

    // Logical NOT
    printf("!a = %d\n", !a);
    printf("!b = %d\n", !b);
    printf("!c = %d\n", !c);

    // Bitwise NOT
    printf("~a = %d\n", ~a);
    printf("~b = %d\n", ~b);
    printf("~c = %d\n", ~c);

    return 0;
}

/*This program declares three variables: a, b, and c. It then uses the following unary operators to perform various operations on these variables:

Increment: ++
Decrement: --
Logical NOT: !
Bitwise NOT: ~
The increment and decrement operators increment or decrement the value of the operand by 1, respectively. The logical NOT operator negates the truth value of the operand, and the bitwise NOT operator inverts the bits of*/