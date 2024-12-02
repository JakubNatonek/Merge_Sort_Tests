﻿#pragma once
#include <tuple>

class merge_sort {
    private:
        std::tuple<int*, int> _merge_arrays( int* array_left, int size_array_left, int* array_right, int size_array_right );
        std::tuple<int*, int> _merge_arrays( std::tuple<int*, int>, std::tuple<int*, int>);
    public:
        merge_sort();
        ~merge_sort();
        std::tuple<int*, int> sort( int tab[], int size );
};
