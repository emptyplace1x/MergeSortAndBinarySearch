#include "Input.h"
#include "Structs/Array.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Array inputArray() {
    int length;
    printf("Set the array length: ");
    scanf("%d", &length);
    getchar(); // to handle \n symbol;
    
    if (length < 1) {
        printf("Invalid array length.\n");
        return (Array){.length = -1};
    }

    printf("Choose mode:\n");
    printf("\t1) Generate random array\n");
    printf("\t2) Input array manually\n");

    switch (getchar()) {
        case '1':
            return generateRandom(length);
        case '2':
            return inputManually(length);
        default:
            length = -1;
            return (Array){.length = -1};
            printf("Unexisting mode.\n");
    }
}

Array generateRandom(int length) {
    Array result;
    result.length = length;
    result.values = malloc(length * sizeof(int));

    int min, max;
    printf("Input min and max values: "); scanf("%d%d", &min, &max);
    
    srand(time(NULL));
    for (int i = 0; i < length; i++) {
        result.values[i] = rand() % (max - min + 1) + min;
    }

    return result;
}

Array inputManually(int length) {
    Array result;
    result.length = length;
    result.values = malloc(length * sizeof(int));

    printf("Enter array values: ");
    for (int i = 0; i < length; i++) {
        scanf("%d", &result.values[i]);
    }

    return result;
}
