/*
 * Passing pointers as parameters to functions.
 * The code here demonstrates passing pointers to functions.
 */
#include <stdio.h>
#include <stdlib.h>

// Since in C, functions can only return a single value,
// we define two integers to process and tpass two
// pointers (c and d) which will allow us to produce
// multiple values from the function.
static void pointerParams(int a, int b, int *c, int *d) {
    int z = a * b + rand() % (b - a + 1);
    int y = a + b + rand() % (b - a - 1);

    *c = z;
    *d = y;
}

int main() {
    // Variables whose addresses are used to store the
    // values produced by the function.
    int x;
    int y;

    // Pass the address of the variables above to capture
    // the values produced by the function.
    pointerParams(15, 20, &x, &y);

    printf("%d\n", x);  // 305
    printf("%d\n", y);
}
