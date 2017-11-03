#include <iostream>

template<typename T>
void f() 
{
    std::cout << 2 << std::endl;
}

void g() 
{
    f<int>();
}
