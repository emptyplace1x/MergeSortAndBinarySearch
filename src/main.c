#include<stdio.h>
#include "Functions/divide.h"

int main() {
    int a[] = {1, 3, 6, 9, 8};

    int len_a = sizeof(a) / sizeof(int);

    
    Divisions a_divisions = divide(a, len_a);

    printf("{ ");
    for (int i = 0; i < a_divisions.len1; i++) {
        printf("%d ", a_divisions.array1[i]);
    }
    printf("}\n");
    
    printf("{ ");
    for (int i = 0; i < a_divisions.len2; i++) {
        printf("%d ", a_divisions.array2[i]);
    }
    printf("}\n");

    return 0;
}
