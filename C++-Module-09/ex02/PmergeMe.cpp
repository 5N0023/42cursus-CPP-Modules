#include "PmergeMe.hpp"


void checkNumber(std::string number)
{
    if(number.size() == 0 || number.size() >  10 || std::atol(number.c_str()) > 2147483647)
    {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
    for(size_t i = 0 ; i < number.size() ; i++)
    {
        if(!std::isdigit(number[i]))
        {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
    }
}

void mergeSort(std::vector<int> &array)
{
    size_t size = array.size();
    if(array.size() == 2)
    {
        if(array[0] > array[1])
        {
            int tmp = array[0];
            array[0] = array[1];
            array[1] = tmp;
        }
        return;
    }
    if(size < 3)
        return;
    size_t middle = size / 2;
    std::vector<int> left;
    std::vector<int> right;
    for(size_t i = 0 ; i < middle ; i++)
        left.push_back(array[i]);
    for(size_t i = middle ; i < size ; i++)
        right.push_back(array[i]);
    mergeSort(left);
    mergeSort(right);
    merge(array, left, right);
}





void merge(std::vector<int> &array, std::vector<int> &left, std::vector<int> &right) {
    std::vector<int>  indexes;
    size_t leftSize = left.size();
    size_t rightSize = right.size();
    size_t l = 0;
    size_t r = 0;
    while (l < leftSize && r < rightSize)
    {
        std::vector<int>::iterator it = std::lower_bound(left.begin(), left.end(), right[r]);
        size_t index;
        if(it == left.end())
            index = leftSize;
        else 
            index = std::distance(left.begin(), it);
        array[index+r] = right[r];
        indexes.push_back(index+r);
        r++;
    }
    for (size_t x = 0; x < array.size(); x++)
    {
        if(std::find(indexes.begin(), indexes.end(), x) == indexes.end())
        {
            array[x] = left[l];
            l++;
        }
    }
}



void printArray(std::string message, std::vector<int> &array)
{
    std::cout << message;
    for (size_t i = 0 ; i < array.size();i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}



void mergeSort(std::deque<int> &deque)
{
    size_t size = deque.size();
    if(deque.size() == 2)
    {
        if(deque[0] > deque[1])
        {
            int tmp = deque[0];
            deque[0] = deque[1];
            deque[1] = tmp;
        }
        return;
    }
    if(size < 3)
        return;
    size_t middle = size / 2;
    std::deque<int> left;
    std::deque<int> right;
    for(size_t i = 0 ; i < middle ; i++)
        left.push_back(deque[i]);
    for(size_t i = middle ; i < size ; i++)
        right.push_back(deque[i]);
    mergeSort(left);
    mergeSort(right);
    merge(deque, left, right);
}





void merge(std::deque<int> &deque, std::deque<int> &left, std::deque<int> &right) {
    std::deque<int>  indexes;
    size_t leftSize = left.size();
    size_t rightSize = right.size();
    size_t l = 0;
    size_t r = 0;
    while (l < leftSize && r < rightSize)
    {
        std::deque<int>::iterator it = std::lower_bound(left.begin(), left.end(), right[r]);
        size_t index;
        if(it == left.end())
            index = leftSize;
        else 
            index = std::distance(left.begin(), it);
        deque[index+r] = right[r];
        indexes.push_back(index+r);
        r++;
    }
    for (size_t x = 0; x < deque.size(); x++)
    {
        if(std::find(indexes.begin(), indexes.end(), x) == indexes.end())
        {
            deque[x] = left[l];
            l++;
        }
    }
}
