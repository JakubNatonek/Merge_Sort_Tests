#include "merge_sort.h"

#include <tuple>
#include <iostream>

merge_sort::merge_sort() {
    
}

merge_sort::~merge_sort() {
    
}

std::tuple<int*, int> merge_sort::_merge_arrays( std::tuple<int*, int> left, std::tuple<int*, int> right ) {
    auto [array_left, size_array_left] = left;
    auto [array_right, size_array_right] = right;
    return  this->_merge_arrays(array_left, size_array_left, array_right, size_array_right);
}

std::tuple<int*, int> merge_sort::_merge_arrays(int* array_left, int size_array_left, int* array_right, int size_array_right) {
    int* new_array = new int[size_array_left + size_array_right];
    std::cout << "Size" << size_array_left  << " E " << size_array_right << std::endl;

    int index_left = 0;
    int index_right = 0;
    for( int index = 0; index < size_array_left + size_array_right; index++ ) {
        std::cout << "TRT " << array_left[index_left] << " : " << array_right[index_right] << std::endl;
        if( (array_left[ index_left ] < array_right[ index_right ] && index_left < size_array_left) || index_right >= size_array_right ) {
            new_array[ index ] = array_left[ index_left ];
            index_left++;
        }
        else if( (array_left[ index_left ] >= array_right[ index_right ] && index_right < size_array_right) || index_left >= size_array_left ) {
            new_array[ index ] = array_right[ index_right ];
            index_right++;
        }
    }
    
    // delete[] array_left;
    // delete[] array_right;
    return {new_array, size_array_left + size_array_right};
}


std::tuple<int*, int> merge_sort::sort( int* array_to_sort, int size_array_to_sort ) {
    if (size_array_to_sort <= 2) {
        if( size_array_to_sort == 1 ) {
            std::cout << "Jesen" << array_to_sort[0] << std::endl;
            return {array_to_sort, size_array_to_sort};
        }
        else if ( size_array_to_sort == 2 ) {
            if( array_to_sort[0] > array_to_sort[1] ) {
                int temporary = array_to_sort[0];
                array_to_sort[0] = array_to_sort[1];
                array_to_sort[1] = temporary;
            }
            std::cout << "swa" << array_to_sort[0] << " " << array_to_sort[1] << std::endl;
            return {array_to_sort, size_array_to_sort};
        }
    }
    
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
    return this->_merge_arrays(  this->sort( array_left, size_array_left ), this->sort( array_right, size_array_right ) );
}
