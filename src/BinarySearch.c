#include "Structs/Array.h"
#include <BinarySearch.h>

int BinarySearch(Array array, int to_find) {
    unsigned int low = 0;
    unsigned int high = array.length - 1;
    
    int mid = 0;
    while (low <= high) {
        mid = low + (high - low) / 2;

        if (array.values[mid] == to_find) {
            return mid;
        }

        if (array.values[mid] < to_find) {
            low = mid + 1;
        } else  {
            high = mid - 1;
        }
    }

    return -1;
}
