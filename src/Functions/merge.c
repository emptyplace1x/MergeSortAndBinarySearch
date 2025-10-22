#include "Functions/merge.h"
#include <stdlib.h>

Array merge(Divisions divided_array) {
    Array merged_array;
    merged_array.length = divided_array.array1.length + divided_array.array2.length;
    merged_array.values = malloc(merged_array.length * sizeof(int));

    int i = 0;
    int j = 0;
    int k = 0;
    while (k < merged_array.length) {
        if (i >= divided_array.array1.length) {
            merged_array.values[k++] = divided_array.array2.values[j++];
        } else if (j >= divided_array.array2.length) {
            merged_array.values[k++] = divided_array.array1.values[i++];
        } else if (divided_array.array1.values[i] < divided_array.array2.values[j]) {
            merged_array.values[k++] = divided_array.array1.values[i++];
        } else {
            merged_array.values[k++] = divided_array.array2.values[j++];
        }
    }

    return merged_array;
}
