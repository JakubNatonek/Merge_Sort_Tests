#include "merge_sort.h"

#include <tuple>

merge_sort::merge_sort() {
    
}

merge_sort::~merge_sort() {
    
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
