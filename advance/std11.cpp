#include <iostream>
#include <vector>
#include <list>



template <typename IT>
void adv(IT& it, int n, decltype(it+1)*) 
{
    std::cout << "random access" << std::endl;
    it += n;
}

template <typename IT>
void adv(IT& it, int n, void*) 
{
    std::cout << "other" << std::endl;
    for (int i=0; i<n; ++i, ++it);
}

template <typename IT>
void adv(IT& it, int n)
{
    adv(it, n, &it);
}

int main() 
{
    std::vector<int> v;
    std::list<int> l;
    
    auto vit = v.begin();
    auto lit = l.begin();
    
    adv(vit, 2);
    adv(lit, 2);
}