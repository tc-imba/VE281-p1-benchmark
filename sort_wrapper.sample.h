//
// Created by liu on 17-9-3.
//

#ifndef P1_SORT_WRAPPER_H
#define P1_SORT_WRAPPER_H

typedef int32_t data_type;
typedef u_int32_t size_type;

#include <algorithm>

// Please paste your functions here
// I think this sample can pass the online judge

void bubble_sort(data_type arr[], const size_type n)
{
    std::sort(arr, arr + n);
}

void insertion_sort(data_type arr[], const size_type n)
{
    std::sort(arr, arr + n);
}

void selection_sort(data_type arr[], const size_type n)
{
    std::sort(arr, arr + n);
}

void merge_sort(data_type arr[], const size_type n)
{
    std::sort(arr, arr + n);
}

void quick_sort_extra(data_type arr[], const size_type n)
{
    std::sort(arr, arr + n);
}

void quick_sort_in_place(data_type arr[], const size_type n)
{
    std::sort(arr, arr + n);
}

// Please wrap your functions here

void _bubble_sort(data_type arr[], const size_type n)
{
    bubble_sort(arr, n);
}

void _insertion_sort(data_type arr[], const size_type n)
{
    insertion_sort(arr, n);
}

void _selection_sort(data_type arr[], const size_type n)
{
    selection_sort(arr, n);
}

void _merge_sort(data_type arr[], const size_type n)
{
    merge_sort(arr, n);
}

void _quick_sort_extra(data_type arr[], const size_type n)
{
    quick_sort_extra(arr, n);
}

void _quick_sort_in_place(data_type arr[], const size_type n)
{
    quick_sort_in_place(arr, n);
}

void _cpp_sort(data_type arr[], const size_type n)
{
    std::sort(arr, arr + n);
}

void (*const sort_fns[])(data_type *, const size_type) = {
        _bubble_sort,
        _insertion_sort,
        _selection_sort,
        _merge_sort,
        _quick_sort_extra,
        _quick_sort_in_place,
        _cpp_sort,
};

#endif //P1_SORT_WRAPPER_H
