#include <iostream>
#include <vector>

int main() 
{
    int x;
    std::vector<int> v;
    while (std::cin >> x) 
    {
        v.push_back(x);
    }
    
    std::cout << "A beolvasott elemek szama: " << v.size() << std::endl;
}    
