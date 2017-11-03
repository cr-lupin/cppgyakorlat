#include <iostream>

void g();

template<typename T>
void f() 
{
    std::cout << 1 << std::endl;
}

int main() 
{
    f<int>();
    g();
}
