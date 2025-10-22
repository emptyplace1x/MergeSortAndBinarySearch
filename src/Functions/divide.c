#include "Functions/divide.h"
#include <stdlib.h>

Divisions divide(int array[], int length) {
    Divisions dividedArrays;

    dividedArrays.len1 = length / 2;
    dividedArrays.len2 = (length + 1) / 2;

    dividedArrays.array1 = malloc(dividedArrays.len1 * sizeof(int));
    dividedArrays.array2 = malloc(dividedArrays.len2 * sizeof(int));
    
    for (int i = 0; i < dividedArrays.len1; i++) {
        dividedArrays.array1[i] = array[i]; 
    }
    for (int i = 0; i < dividedArrays.len2; i++) {
        dividedArrays.array2[i] = array[i + dividedArrays.len1]; 
    }

    return dividedArrays;
}
