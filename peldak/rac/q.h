#ifndef Q_H
#define Q_H

#include <ostream>

class Q
{
private:
    int p;
    int q;
    void egyszerusit();
public:
    Q(int p_ = 0, int q_ = 1): p(p_), q(q_) 
    {
        egyszerusit();
    }
    
    // Q(int p_ = 0, int q_ = 1): p(p_), q(q_) 
    // {
    //   p = p_;
    //   q = q_;
    //   egyszerusit();
    // }
    
    Q& operator+=(const Q& r) 
    {
        p = p*r.q + r.p * q;
        q = q * r.q;
        
        egyszerusit();
        return *this;
    }
    
    Q& operator*=(const Q& r)
    {
        p *= r.p;
        q *= r.q;
        
        egyszerusit();
        return *this;
    }
    
    operator double() const
    {
        return static_cast<double>(p) / q;
    }
    
    operator int() const
    {
        return p / q;
    }
        
    void print(std::ostream& os) const
    {
        if (q != 1)
            os << p << " / " << q;
        else
            os << p;
    }
};

std::ostream& operator<<(std::ostream& os, const Q& q);
Q operator+(const Q& a, const Q& b);
Q operator*(const Q& a, const Q& b);

#endif