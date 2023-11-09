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
    if(size < 2)
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

void merge(std::vector<int> &array, std::vector<int> &left, std::vector<int> &right)
{
    size_t leftSize = left.size();
    size_t rightSize = right.size();
    size_t i = 0;
    size_t l = 0;
    size_t r = 0;
    while (l < leftSize && r < rightSize)
    {
        if(left[l] <= right[r])
        {
            array[i] = left[l];
            l++;
        }
        else
        {
            array[i] = right[r];
            r++;
        }
        i++;
    }
    while (l < leftSize)
    {
        array[i] = left[l];
        l++;
        i++;
    }
    while (r < rightSize)
    {
        array[i] = right[r];
        r++;
        i++;
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
    if(size < 2)
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

void merge(std::deque<int> &deque, std::deque<int> &left, std::deque<int> &right)
{
    size_t leftSize = left.size();
    size_t rightSize = right.size();
    size_t i = 0;
    size_t l = 0;
    size_t r = 0;
    while (l < leftSize && r < rightSize)
    {
        if(left[l] <= right[r])
        {
            deque[i] = left[l];
            l++;
        }
        else
        {
            deque[i] = right[r];
            r++;
        }
        i++;
    }
    while (l < leftSize)
    {
        deque[i] = left[l];
        l++;
        i++;
    }
    while (r < rightSize)
    {
        deque[i] = right[r];
        r++;
        i++;
    }

}