#include <stdio.h>
#include <stdlib.h>
#include "function_pointers_demo.h"
/**
 * A function pointer in C is just like a data pointer.
 * Instead of pointing at data it points at executable code
 * --i.e., the address of a function. These can be stored in a
 * variable, passed around for callbacks, dispatch tables, etc.,
 * and invoke the function indirectly through the pointer.
 */
int add(int a, int b) {
    return a + b;
}

// The function pointer is assigned in main.c.

/**
 * You can also make  the pointer global and put it in the header.
 *
 * Define the global pointer:
 *     int (*fnPtr)(int, int) = add;
 */