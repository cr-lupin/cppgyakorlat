#include "q.h"

void Q::egyszerusit()
{
    int a = p;
    int b = q;
    
    while (a != b) 
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    
    p /= a;
    q /= b;
}

std::ostream& operator<<(std::ostream& os, const Q& q)
{
    q.print(os);
    return os;
}

Q operator+(const Q& a, const Q& b)
{
    Q res = a;
    return res += b;
}

Q operator*(const Q& a, const Q& b)
{
    Q res = a;
    return res *= b;
}