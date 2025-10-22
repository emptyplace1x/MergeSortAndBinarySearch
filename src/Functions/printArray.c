#include "Functions/printArray.h"
#include <stdio.h>

void printArray(Array to_print) {
    printf("{ ");
    for (int i = 0; i < to_print.length; i++) {
        printf("%d ", to_print.values[i]);
    }
    printf("}\n");
}
