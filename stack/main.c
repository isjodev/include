#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void) {
    Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element :%d\n", peek(&stack));

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));

    printf("Top element after pops: %d\n", peek(&stack));

    return 0;
}
