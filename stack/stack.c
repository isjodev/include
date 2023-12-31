#include <stdio.h> 
#include <stdbool.h>

#include "stack.h"

void initialize(Stack *stack) {
    stack->top = -1;
}

bool isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

bool isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow\n");
    } else {
        stack->top++;
        stack->items[stack->top] = value;
    }
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return -1;
    } else {
        int popped = stack->items[stack->top];
        stack->top--;
        return popped;
    }
}

int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return stack->items[stack->top];
    }
}
