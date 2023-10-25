#include "utils.hpp"

int main()
{   
    B b;
    identify(b);
    Base *base = generate();
    identify(base);
    Base &ref = *base;
    identify(ref);
    delete base;
    int i = 0;
    identify(reinterpret_cast<A*>(i));
    return 0;
}