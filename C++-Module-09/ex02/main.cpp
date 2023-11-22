#include "PmergeMe.hpp"
#include <iomanip>
int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        std::cerr << "Error" << std::endl;
        return(1);
    }
    std::vector<int> array;
    std::deque<int> deque;
    for (int i = 1 ; i < argc ;i++)
    {
        checkNumber(argv[i]);
        array.push_back(std::atoi(argv[i]));
        deque.push_back(std::atoi(argv[i]));
    }
    size_t size = array.size();
    double vectorTime = 0;
    double dequeTime = 0;
    printArray("Before: ", array);
    clock_t start = clock();
    mergeSort(array);
    clock_t end = clock();
    vectorTime = static_cast<double>(end - start) / 10000;
    printArray("After:  ", array);
    start = clock();
    mergeSort(deque);
    end = clock();
    dequeTime = static_cast<double>(end - start) / 10000;
    std::cout << "Time to process a range of " << size << " elements with std::vector : "<< vectorTime << " us" << std::endl;
    std::cout << "Time to process a range of " << size << " elements with std::deque   : "<< dequeTime << " us" << std::endl;
    return(0);
}