#include <vector>

bool bs(const std::vector<int>& v, int l, int h, int elem)
{
    if (l > h) return false;
    
    int mid = (l + h) / 2;
    if (v[mid] == elem) return true;
    
    if (v[mid] < elem)
        return bs(v, mid + 1, h, elem);
    else
        return bs(v, l, mid - 1, elem);   
}
