//
// Created by liu on 17-9-3.
//

#ifndef P1_SORT_WRAPPER_H
#define P1_SORT_WRAPPER_H

typedef int32_t data_type;
typedef u_int32_t size_type;

#include <algorithm>

// Please paste your functions here



// Please wrap your functions here

void bubble_sort(data_type arr[], const size_type n)
{

}

void insertion_sort(data_type arr[], const size_type n)
{

}

void selection_sort(data_type arr[], const size_type n)
{

}

void merge_sort(data_type arr[], const size_type n)
{

}

void quick_sort_extra(data_type arr[], const size_type n)
{

}

void quick_sort_in_place(data_type arr[], const size_type n)
{

}

void cpp_sort(data_type arr[], const size_type n)
{
    std::sort(arr, arr + n);
}

void (*const sort_fns[])(data_type *, const size_type) = {
        bubble_sort,
        insertion_sort,
        selection_sort,
        merge_sort,
        quick_sort_extra,
        quick_sort_in_place,
        cpp_sort,
};

#endif //P1_SORT_WRAPPER_H
