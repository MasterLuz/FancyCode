#include "FSpan.h"

#include <iostream>

void FSpan::test(std::span<char> sp)
{
    size_t n  = sp.size();
    std::cout << n << std::endl;
    sp[n - 1] = 0;
}