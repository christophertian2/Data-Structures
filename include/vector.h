#ifndef VECTOR_H
#define VECTOR_H

/*
 * @struct Vector
 * @brief generic resizable array that stores void* pointers
 *
 * @var Vector::data 
 * Pointer to array of element pointers (void *)
 *
 * @var Vector::size
 * Current number of elements stored in the vector
 *
 * @var Vector::capacity
 * Number of elements that can be stored before resizing
 */

typedef struct {
    void **data;
    int size;
    int capacity;
} Vector;

Vector *vector_init(void);
void vector_push(Vector *v, void *item);
void *vector_get(Vector *v, int index);
void vector_free(Vector *v);

#endif
