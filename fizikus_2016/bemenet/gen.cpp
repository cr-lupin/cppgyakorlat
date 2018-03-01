#include <iostream>
#include <sstream>
#include <vector>
#include <random>
#include <algorithm>
#include <iterator>


int main(int argc, char* argv[]) 
{
    int cnt = 20;
    int max = 2000;
    
    if (argc == 3) 
    {
        std::stringstream ss;
        ss << argv[1] << " " << argv[2];
        ss >> cnt >> max;
    }
    
    std::vector<bool> v(max, false);
    std::vector<int> result;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, max - 1);
    
    for (int i = 0; i < cnt; ++i) 
    {
        int n = dis(gen);
        if (!v[n])
        {
            v[n] = true;
            result.push_back(n);
        }
    }
    
    for (int i = 0; i < result.size(); ++i)
    {
        std::cout << result[i] << " ";
    }
    
    std::cout << std::endl;
    std::cerr << result.size() << std::endl;
        
    
}