//
// Created by wrvth on 5/8/2025.
//

#ifndef C_STYLE_CALLBACK_H
#define C_STYLE_CALLBACK_H

typedef void (*ClickHandler)(void *context);

/* The "Button" struct
 *     - a label
 *     - a callback pointer
 *     - an opaque context pointer for any use case
 */
typedef struct {
    const char      *label;
    ClickHandler    onClick;
    void            *context;
} Button;

void pressButton(const Button *btn);
void greetUser(const void *ctx);

#endif //C_STYLE_CALLBACK_H
