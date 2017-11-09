#include <iostream>
#include "base.h"


struct E : Printable
{
    void print() {
        std::cout << std::endl;
    }
};

static E e;