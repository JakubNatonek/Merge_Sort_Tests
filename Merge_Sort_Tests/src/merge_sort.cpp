#include "merge_sort.h"

#include <tuple>

merge_sort::merge_sort() {
    
}

merge_sort::~merge_sort() {
    
}

std::tuple<int*, int> merge_sort::_merge_arrays(int* array_left, int size_array_left, int* array_right, int size_array_right) {
    int* new_array = new int[size_array_left + size_array_right];

    for( int index = 0; index < size_array_left; index++ ) {
        new_array[index] = array_left[index];
    }

    for( int index = size_array_left; index < size_array_left + size_array_right; index++ ) {
        new_array[index] = array_left[index];
    }
    
    return {new_array, size_array_left + size_array_right};
}


std::tuple<int*, int> merge_sort::sort( int array_to_sort[], int size_array_to_sort ) {
    int size_array_left = size_array_to_sort / 2;
    int size_array_right = size_array_to_sort / 2;
    
    if( size_array_to_sort % 2 == 1 ) {
        size_array_left = size_array_left + 1;
    }
    
    int* array_left = new int[size_array_left];
    int* array_right = new int[size_array_right];
    
    for( int index = 0; index < size_array_to_sort; index++ ) {
        if( index < size_array_left ) {
            array_left[index] = array_to_sort[index];
        }
        else {
            array_right[(index - size_array_left)] = array_to_sort[index];
        }
    }
    // delete[] right_side;
    // delete[] array_left;
    return {array_right, size_array_right};
}
