#include "MergeSort.h"

int main() {
    Array to_sort;
    to_sort.length = 9;
    to_sort.values = (int[]){1, 4, 3, 2, 5, 9, 7, 8, 6};

    Array sorted = mergeSort(to_sort);

    printArray(sorted);

    return 0;
}
