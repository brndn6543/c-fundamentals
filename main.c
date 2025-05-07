#include <stdio.h>
#include <stdlib.h>
#include "src/function_pointer_parameters"

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