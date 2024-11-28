#include <iostream>
#include "src/merge_sort.h"

int main(int argc, char* argv[]) {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    merge_sort sorter = merge_sort();
    int* tav = sorter.sort(array, 10);
    for ( int i = 0; i < 5; i++) {
        std::cout << tav[i] << " ";
    }
    delete[] tav;
    return 0;
}
