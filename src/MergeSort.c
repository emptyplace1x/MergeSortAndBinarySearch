#include <MergeSort.h>

Array mergeSort(Array array_to_sort) {
    if (array_to_sort.length == 1) {
        return array_to_sort;
    }

    Divisions divided_array = divide(array_to_sort);
    Divisions sorted_divisions;

    sorted_divisions.array1.length = divided_array.array1.length;
    sorted_divisions.array2.length = divided_array.array2.length;

    sorted_divisions.array1 = mergeSort(divided_array.array1);
    sorted_divisions.array2 = mergeSort(divided_array.array2);

    
    return merge(sorted_divisions);
}
