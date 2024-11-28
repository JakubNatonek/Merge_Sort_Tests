#include <iostream>
#include "src/merge_sort.h"

int main(int argc, char* argv[]) {
    int array[] = {12, 8, 9, 3, 11, 5, 4};
    
    merge_sort sorter = merge_sort();
    auto[tab, size_tab] = sorter.sort(array, 7);
    for ( int i = 0; i < size_tab; i++) {
        std::cout << tab[i] << " ";
    }
    delete[] tab;
    return 0;
}
