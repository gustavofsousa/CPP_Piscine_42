#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T* array, size_t len, void (*ft)(T const& arg))
{
    for (size_t i = 0; i < len; i++)
        ft(array[i]);
}

#endif
