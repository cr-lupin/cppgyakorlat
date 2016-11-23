#include <iostream>
#include <map>
#include <utility>
#include <string>
#include <set>

const int inf = 2147483647;

std::string extract_min(const std::map<std::string, int>& d, std::set<std::string>& Q) 
{
    std::map<std::string, int>::const_iterator res = d.end();
    for (std::map<std::string, int>::const_iterator it = d.begin(); it != d.end(); ++it)
    {
        if (Q.count(it->first) > 0)
        {
            if (res == d.end()) 
            {
                res = it;
            }
            else if (it->second < res->second) 
            {
                res = it;
            }
        }
    }
    
    Q.erase(res->first);
    return res->first;
}


int main() 
{
    std::map<std::string, std::map<std::string, int> > g;
    std::map<std::string, int> d;
    std::set<std::string> Q;
    std::map<std::string, std::string> prev;
    std::string start, end;
    std::string u, v;
    int w;
    
    std::cin >> start >> end;
    
    while (std::cin >> u >> v >> w)
    {
        g[u][v] = w;
        d[u] = inf;
        d[v] = inf;
        Q.insert(u);
        Q.insert(v);
    }
    
    d[start] = 0;
    
    while (!Q.empty())
    {
        std::string current = extract_min(d, Q);
        
        for (std::map<std::string, int>::iterator it = g[current].begin(); it != g[current].end(); ++it)
        {
            int alt = d[current] + it->second;
            if (alt < d[it->first])
            {
                d[it->first] = alt;
                prev[it->first] = current;
            }
        }
    }
    
    std::cout << d[end] << std::endl;
}
