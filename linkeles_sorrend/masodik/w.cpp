#include <iostream>
#include "base.h"


struct W : Printable
{
    void print() {
        std::cout << "World";
    }
};

static W w;