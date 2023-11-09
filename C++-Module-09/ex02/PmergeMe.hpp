#pragma once


#include <iostream>
#include  <vector>
#include <deque>
#include <ctime>


void checkNumber(std::string number);
void mergeSort(std::vector<int> &array);
void merge(std::vector<int> &array, std::vector<int> &left, std::vector<int> &right);
void printArray(std::string message, std::vector<int> &array);

void mergeSort(std::deque<int> &deque);
void merge(std::deque<int> &deque, std::deque<int> &left, std::deque<int> &right);