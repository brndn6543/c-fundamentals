/*
 * Passing pointers as parameters to functions.
 * The code here demonstrates passing pointers to functions.
 */
#include <stdio.h>
#include <stdlib.h>
#include "function_parameters_pointers.h"

// Since in C, functions can only return a single value,
// we define two integers to process and tpass two
// pointers (c and d) which will allow us to produce
// multiple values from the function.
void pointerParams(int a, int b, int *c, int *d) {
    int z = a * b + rand() % (b - a + 1);
    int y = a + b + rand() % (b - a - 1);

    *c = z;
    *d = y;
}