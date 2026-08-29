#include "float_vector.h"
#include <stdio.h>

int main() {
    FloatVector *vec = FloatVector_create(4);
    FloatVector_print(vec);

    FloatVector_append(vec, 0.0);
    FloatVector_append(vec, 1.0);
    FloatVector_append(vec, 3.0);
    FloatVector_append(vec, 4.0);
    FloatVector_print(vec);
    
    FloatVector_remove(vec, 0);
    FloatVector_print(vec);

    FloatVector_destroy(&vec);

    return 0;
}