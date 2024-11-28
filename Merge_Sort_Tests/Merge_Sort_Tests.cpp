#include <iostream>
#include "src/merge_sort.h"

int main(int argc, char* argv[]) {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    merge_sort sorter = merge_sort();
    auto[tab, size_tab] = sorter.sort(array, 10);
    for ( int i = 0; i < size_tab; i++) {
        std::cout << tab[i] << " ";
    }
    delete[] tab;
    return 0;
}
