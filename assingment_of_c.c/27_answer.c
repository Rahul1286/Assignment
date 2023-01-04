#include <stdio.h>

#define AREA(l, w) ((l) * (w))

int main(void)
{
    int length = 5, width = 10;
    printf("Area = %d\n", AREA(length, width));

    return 0;
}

/*This program defines a macro called AREA that calculates the area of a rectangle given its length and width. The macro is defined using the #define directive and uses the () operator to enclose the code block. The macro is then invoked like a function in the main function, using the AREA macro name followed by the arguments in parentheses.

Macros have several advantages over functions in C. They are expanded inline, which means they do not incur the overhead of a function call. They are also easier to define and use than functions, as they do not require a separate function declaration or definition.

However, macros also have some disadvantages. They do not have their own scope, which means that any variables defined within a macro are global. They can also be more difficult to debug than functions, as the expansion of the macro is not visible in the source code.*/