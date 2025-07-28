#include "../include/stack.h"

void stack_init(Stack* stack) {
    vector_init(&stack->vec);
}

void stack_push(Stack* stack, void* item) {
    vector_push(&stack->vec, item);
}

void* stack_pop(Stack* stack) {
    if(stack->vec.size == 0) return NULL;
    void* item = vector_get(&stack->vec, stack->vec.size - 1);
    stack->vec.size--;
    return item;
}

void* stack_peek(Stack* stack) {
    if(stack->vec.size == 0) return NULL;
    return vector_get(&stack->vec, stack->vec.size-1);
}

size_t stack_size(Stack* stack) {
    return stack->vec.size;
}

void stack_free(Stack* stack) {
    vector_free(&stack->vec);
}
