#pragma once


template<typename myTemplate>
myTemplate max(myTemplate a, myTemplate b)
{
    return(a > b) ? a :b;
};

template<typename myTemplate>
myTemplate min(myTemplate a, myTemplate b)
{
    return(a < b) ? a :b;
}


template<typename myTemplate>
void swap(myTemplate &a, myTemplate &b)
{
    myTemplate tmp;
    tmp = a;
    a = b;
    b = tmp;
}