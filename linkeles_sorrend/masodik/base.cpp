#include "base.h"

void Printables::print() 
{
    for (int i = 0; i < v.size(); ++i) 
    {
        v[i]->print();
    }
}
