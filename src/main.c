#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function_parameters_pointers.h"
#include "function_pointers_demo.h"

int main(void) {
    printf("--- Function Parameters Pointers ---\n");

    // Variables whose addresses are used to store the
    // values produced by the function.
    int x;
    int y;

    // Pass the address of the variables above to capture
    // the values produced by the function.
    pointerParams(15, 20, &x, &y);

    printf("%d\n", x);  // 305
    printf("%d\n", y);


    printf("\n");
    printf("--- Function Pointers ---\n");

    // Declare a function pointer type and initialize it to point at add.
    int (*fnPtr)(int, int) = add;
    int result = fnPtr(1,3);    // Store result.

    // If using the global approach, you can just the function pointer.
    // int result = fnPtr(3,4);

    printf("%d\n", result);

}
