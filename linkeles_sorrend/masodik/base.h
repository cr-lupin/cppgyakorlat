#ifndef BASE_H
#define BASE_H

#include <vector>

struct Printable;

struct Printables
{
public:
    static Printables& getInstance()
    {
        static Printables instance; 
        return instance;
    }
    
    void add(Printable* b) 
    {
        v.push_back(b);
    }
    
    void print();
    

private:
    std::vector<Printable*> v;
};
        

struct Printable 
{
    Printable() 
    {
        Printables::getInstance().add(this);
    }
    
    virtual void print() = 0;
};


    

#endif