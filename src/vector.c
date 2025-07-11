#include "../include/vector.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define INIT_CAPACITY 4

Vector *vector_init(){
    Vector *v = malloc(sizeof(Vector));
    assert(v != NULL);
    v->data = malloc(sizeof(void *) * INIT_CAPACITY);
    assert(v->data != NULL);
    v->size = 0;
    v->capacity = INIT_CAPACITY;
    return v;

}

void vector_push(Vector *v, void *item) {

    // possibly make a new function for resizing the array and take a deeper lookinto realloc
    if (v->size == v->capacity) {
        v->capacity += INIT_CAPACITY;
        v->data = realloc(v->data, sizeof(void*) * v->capacity);
    }

    // ++ is a post increment; stick the element in then increment size to last empty element
    v->data[v->size++] = item;

}

void *vector_get(Vector *v, int index) {
    if (index < 0 || index >= v->size) return NULL;
    return v->data[index];

}

void vector_free(Vector *v) {
    assert(v != NULL);

    free(v->data);
    free(v);
}
