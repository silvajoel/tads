#include "float_vector.h"
#include <stdlib.h>

typedef struct float_vector{
    int capacity; // num máximo de elementos
    int size; // quantidade de elementos armazenados atualmente
    float *data; // vetor de floats
} FloatVector;

/**
 * @brief Cria (aloca) um vetor de floats com uma dada capacidade
 * @param capacity Capacidade do vetor
 * @return FloatVector* Um vetor floats alocado/criado
 */
FloatVector *create(int capacity){
    FloatVector *vec = (FloatVector*) calloc(1, sizeof(FloatVector));
    vec->size = 0;
    vec->capacity = capacity;
    vec->data = (float*) calloc(capacity, sizeof(float));

    return vec; 
}

void destroy(FloatVector **vec_ref){
    FloatVector *vec = *vec_ref;

    free(vec->data);
    free(vec);
}