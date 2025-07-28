#ifndef STACK_H
#define STACK_H

#include "vector.h"
#include <stddef.h> // for size_t
#include <stdlib.h> // for NULL


typedef struct {
    Vector vec;
} Stack;

void stack_init(Stack* stack);
void stack_push(Stack* stack, void* item);
void* stack_pop(Stack* stack);
void* stack_peek(Stack* stack);
size_t stack_size(Stack* stack);
void stack_free(Stack* stack);

#endif
