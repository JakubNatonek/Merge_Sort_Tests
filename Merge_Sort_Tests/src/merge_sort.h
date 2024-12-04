#pragma once
#include <tuple>

/**
 * @class merge_sort
 * @brief Klasa implementująca algorytm sortowania przez scalanie.
 */
class merge_sort {
    private:
        /** 
        * @brief Scalanie dwóch tablic.  
        * @param array_left Wskaźnik na pierwszą tablicę. 
        * @param size_array_left Rozmiar pierwszej tablicy. 
        * @param array_right Wskaźnik na drugą tablicę. 
        * @param size_array_right Rozmiar drugiej tablicy. 
        * @return std::tuple<int*, int> Krotka zawierająca wskaźnik na scaloną tablicę oraz jej rozmiar. 
        */
        std::tuple<int*, int> _merge_arrays( int* array_left, int size_array_left, int* array_right, int size_array_right );

        /** 
        * @brief Scalanie dwóch krotek zawierających tablice. 
        * @param left Krotka zawierająca wskaźnik na pierwszą tablicę oraz jej rozmiar. 
        * @param right Krotka zawierająca wskaźnik na drugą tablicę oraz jej rozmiar. 
        * @return std::tuple<int*, int> Krotka zawierająca wskaźnik na scaloną tablicę oraz jej rozmiar. 
        */
        std::tuple<int*, int> _merge_arrays( std::tuple<int*, int>, std::tuple<int*, int>);
    public:

        /**
        * @brief Konstruktor klasy merge_sort.
        */
        merge_sort();

        /**
        * @brief Destruktor klasy merge_sort.
        */
        ~merge_sort();

        /** 
        * @brief Sortowanie tablicy metodą sortowania przez scalanie.
        * @param array_to_sort Wskaźnik na tablicę do posortowania. 
        * @param size_array_to_sort Rozmiar tablicy. 
        * @return std::tuple<int*, int> Krotka zawierająca wskaźnik na posortowaną tablicę oraz jej rozmiar. 
        */
        std::tuple<int*, int> sort( int* array_to_sort, int size_array_to_sort );
};
