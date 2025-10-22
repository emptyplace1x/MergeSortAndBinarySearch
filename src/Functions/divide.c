#include "Functions/divide.h"
#include <stdlib.h>

Divisions divide(Array array) {
    Divisions dividedArrays;

    dividedArrays.array1.length = array.length / 2;
    dividedArrays.array2.length = (array.length + 1) / 2;

    dividedArrays.array1.values = malloc(dividedArrays.array1.length * sizeof(int));
    dividedArrays.array2.values = malloc(dividedArrays.array2.length * sizeof(int));
    
    for (int i = 0; i < dividedArrays.array1.length; i++) {
        dividedArrays.array1.values[i] = array.values[i]; 
    }
    for (int i = 0; i < dividedArrays.array2.length; i++) {
        dividedArrays.array2.values[i] = array.values[i + dividedArrays.array1.length]; 
    }

    return dividedArrays;
}
