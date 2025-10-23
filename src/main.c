#include "MergeSort.h"
#include "BinarySearch.h"
#include "Input.h"
#include <stdio.h>
#include <time.h>

int main() {
    Array to_sort = inputArray();

    clock_t start = clock();
    Array sorted = mergeSort(to_sort);
    clock_t end = clock();

    double sorting_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Sorted array is: "); printArray(sorted);
    printf("Sorting time: %lf\n", sorting_time);

    int to_find;
    printf("Enter value to find: "); scanf("%d", &to_find);

    int found_index = BinarySearch(sorted, to_find);

    if (found_index != -1) {
        printf("Element %d has index %d in array.\n", to_find, found_index);
    } else {
        printf("Element was not found.\n");
    }


    return 0;
}
