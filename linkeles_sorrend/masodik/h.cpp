#include <iostream>
#include "base.h"


struct H : Printable
{
    void print() {
        std::cout << "Hello";
    }
};

static H h;