#include "../include/vector.h"
#include <stdio.h>

int main() {
    Vector *v = vector_init();

    int a = 10, b = 20, c = 30;
    vector_push(v, &a);
    vector_push(v, &b);
    vector_push(v, &c);

    for (int i = 0; i < 3; i++) {
        printf("v[%d] = %d\n", i, *(int *)vector_get(v,i));
    }

    vector_free(v);
    return 0;
}
