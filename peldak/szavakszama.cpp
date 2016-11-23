#include <map>
#include <string>
#include <iostream>

int main()
{
    std::map<std::string, int> sz;
    std::string szo;
    
    while (std::cin >> szo)
    {
        ++sz[szo];
    }
    
    for (std::map<std::string, int>::iterator it = sz.begin(); it != sz.end(); ++it)
    {
        std::cout << it->first << " " << it->second << std::endl;
    }
}
