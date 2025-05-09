#include <stdio.h>
#include "c_style_callback.h"
/* Using callbacks in this way allows you to bundle data and
 * behavior, essentially encapsulation.
 *
 *     State (.context)
 *     Behavior (.onClick)
 *
 * The only way to interact with that state is through the functions
 * you expose and whatever callbacks you wire up.
 *
 * By swapping out different onClick functions while keeping the
 * same struct shape, you get polymorphic behavior in C.
 */

/* Define the callback type:
 *     Takes a void* context (user data) and returns nothing.
 *     This is an opaque pointer--can point to any data type.
 */
typedef void (*ClickHandler)(void *context);


// Simulate pressing the button: invoke callback if set.
void pressButton(const Button *btn) {
    printf("Pressed button %s\n", btn->label);
    if (btn->onClick != NULL) {
        // Invoke the method and pass it context.
        btn->onClick(btn->context);
    }
}

// Example callback function.
void greetUser(const void *ctx) {
    const char *name = ctx;
    printf("Hello %s. You clicked the button.\n", name);
}