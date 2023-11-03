#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main(int, char**)
{
    int * a = new int();
    std::cout << "*a = " << *a << std::endl;
    delete a;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 100;
        numbers[i] = value;
        mirror[i] = value;
    }
    for (int i = 0; i < MAX_VAL; i++)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;
    std::cout << "size of array: " << numbers.size() << std::endl;

    // //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        for (int i = 0; i < MAX_VAL; i++)
            std::cout << test[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand() % 100;
    }
    std::cout << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
        std::cout << numbers[i] << " ";
    delete [] mirror;//

    std::cout << std::endl;
    std::cout << std::endl;
    Array<std::string> strings(4);
    strings[0] = "HELLO";
    strings[1] = "WORLD";
    strings[2] = "HOW ARE YOU?";
    strings[3] = "I'M FINE, THANK YOU!";
    for (int i = 0; i < 4; i++)
        std::cout << strings[i] << std::endl;
    std::cout << std::endl;
    strings[0] = "BYE";
    for (int i = 0; i < 4; i++)
        std::cout << strings[i] << std::endl;

    return 0;
}