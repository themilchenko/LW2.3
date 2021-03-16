#include "Isochoric.h"
#include <iostream>

double Isochoric::count_work() const
{
    return 0;
}

void Isochoric::print() const
{
    std::cout << "The pressure is " << pressure << ", " << "1st volume is " << volume << std::endl;
}