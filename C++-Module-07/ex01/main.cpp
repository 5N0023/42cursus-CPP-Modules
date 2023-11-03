#include <iostream>
#include "iter.hpp"

void print(int n)
{
    std::cout << n << " ";
}

void add(int &n)
{
    n += 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, print);
    std::cout << std::endl;
    iter(arr, 5, add);
    std::cout << std::endl;
    iter(arr, 5, print);
    std::cout << std::endl;
    return 0;
}