#pragma once

#include <algorithm>


template<typename T>
int easyfind(T &cont, int toFind)
{
    typename T::iterator it = std::find(cont.begin(), cont.end(), toFind);
    if (it == cont.end())
        throw std::exception();
    return *it;
}