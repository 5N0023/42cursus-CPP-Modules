#pragma once

#include <iostream>
#include <exception>
template <typename T>
class Array
{
    private:
        T *array;
        unsigned int len;
    public:
        Array();
        Array(unsigned int len);
        Array(Array const &other);
        Array &operator=(Array const &other);
        T &operator[](unsigned int index);
        ~Array();
        unsigned int size() const;
        class OutOfRange : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};
#include "Array.tpp"
