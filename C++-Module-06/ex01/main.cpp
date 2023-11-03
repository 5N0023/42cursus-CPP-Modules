#include "Serializer.hpp"

int main()
{
    Data *data = new Data;
    data->c1 = 'A';
    data->n = 1337;
    data->c2 = 'B';

    uintptr_t raw = Serializer::serialize(data);
    std::cout << "data address: " << data << std::endl;
    std::cout << "raw: " << raw << std::endl;
    Data *data2 = Serializer::deserialize(raw);

    std::cout << "data->c1: " << data->c1 << std::endl;
    std::cout << "data->n: " << data->n << std::endl;
    std::cout << "data->c2: " << data->c2 << std::endl;
    std::cout << "data2->c1: " << data2->c1 << std::endl;
    std::cout << "data2->n: " << data2->n << std::endl;
    std::cout << "data2->c2: " << data2->c2 << std::endl;
    delete data;
    return 0;
}