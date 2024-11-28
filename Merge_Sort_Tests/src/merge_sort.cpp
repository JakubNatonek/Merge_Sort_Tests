#include "merge_sort.h"

#include <ios>

merge_sort::merge_sort() {
    
}

merge_sort::~merge_sort() {
    
}

int* merge_sort::sort( int tab[], int size ) {
    int size_left_side = size/2;
    int size_right_side = size/2;
    
    if( size % 2 == 1 ) {
        size_left_side = size_left_side + 1;
    }
    
    int* left_side = new int[size_left_side];
    int* right_side = new int[size_right_side];
    for( int i = 0; i < size; i++ ) {
        if( i < size_left_side ) {
            left_side[i] = tab[i];
        }
        else {
            right_side[ (i - size_left_side)] = tab[i];
        }
    }
    // delete[] right_side;
    // delete[] left_side;
    return right_side;
}
