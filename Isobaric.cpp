#include "Isobaric.h"
#include <iostream>

double Isobaric::count_work() const
{
    return pressure * (volume2 - volume1);
}

void Isobaric::print() const
{
    std::cout << "The pressure is " << pressure << ", " << "1st volume is " << volume1
    << ", " << "2nd volume is " << volume2 << std::endl;
}