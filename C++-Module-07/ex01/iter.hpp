#pragma once

template <typename T, typename FUNC>
void iter(T *arr, size_t len, FUNC f)
{
    for (size_t i = 0; i < len; i++)
        f(arr[i]);
}
