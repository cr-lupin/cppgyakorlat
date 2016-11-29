#include <iostream>
#include "q.h"

int main()
{
    Q r(7,3);
    Q t(8,5);
    Q u = 2;
    Q v = 3;
    std::cout << r << std::endl;
    std::cout << r + t << std::endl;
    std::cout << r * t << std::endl;
    std::cout << r * u << std::endl;
    std::cout << r * v << std::endl;
}
